/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: n/a
 * ---------------------------------------------------------
 * Title:			Implementation of UTs for merge sort
 * Author:			S. Schraml
 * ----------------------------------------------------------
 * Description:
 * Tests functions for merge sort.
 * ----------------------------------------------------------
 */

#include "test_merge_sort.h"

#include <stdio.h>
#include <string.h>

#include "shortcut.h"
#include "config.h"
#include "sorting.h"

#include "merge_sort.h"


/* ------------------------------------------------------------------- */

#ifdef LIST_VARIANT

TEST(test_merge_sort_list_ascending) {
    IntList list = list_obtain();
    if (list != 0) {
        init_list_random(list, 16);
        merge_sort_list(list, &is_in_asc_order);
        int i = 1;
        for (; i < list_get_size(list) && list_get_at(list, i-1) <= list_get_at(list, i); i++);
        ASSERT_TRUE(i == list_get_size(list), MSG("Expected that all elements are in ascending order"));
        list_release(&list);
    }
}

TEST(test_merge_sort_list_decending) {
    IntList list = list_obtain();
    if (list != 0) {
        init_list_random(list, 16);
        merge_sort_list(list, &is_in_desc_order);
        int i = 1;
        for (; i < list_get_size(list) && list_get_at(list, i-1) >= list_get_at(list, i); i++);
        ASSERT_TRUE(i == list_get_size(list), MSG("Expected that all elements are in descending order"));
        list_release(&list);
    }
}

#else

TEST(test_merge_sort_array_ascending) {
    int array[16];
    int cnt = 16;
    init_array_random(array, cnt);
    merge_sort_array(array, cnt, &is_in_asc_order);
    int i = 1;
    for (; i < cnt && array[i-1] <= array[i]; i++);
    ASSERT_TRUE(i == cnt, MSG("Expected that all elements are in ascending order"));
}

TEST(test_merge_sort_array_descending) {
    int array[16];
    int cnt = 16;
    init_array_random(array, cnt);
    merge_sort_array(array, cnt, &is_in_desc_order);
    int i = 1;
    for (; i < cnt && array[i-1] >= array[i]; i++);
    ASSERT_TRUE(i == cnt, MSG("Expected that all elements are in descending order"));
}

#endif

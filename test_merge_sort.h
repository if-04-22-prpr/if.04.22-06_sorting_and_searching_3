/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: n/a
 * ---------------------------------------------------------
 * Title:			Unit Tests for merge sort
 * Author:			S. Schraml
 * ----------------------------------------------------------
 * Description:
 * Tests functions for merge sort.
 * ----------------------------------------------------------
 */
#ifndef ___TEST_MERGE_SORT_H
#define ___TEST_MERGE_SORT_H

#include "shortcut.h"
#include "config.h"

#ifdef LIST_VARIANT
TEST(test_merge_sort_list_ascending);
TEST(test_merge_sort_list_decending);
#else 
TEST(test_merge_sort_array_ascending);
TEST(test_merge_sort_array_descending);
#endif

#endif
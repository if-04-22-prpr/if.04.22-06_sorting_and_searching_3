/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: n/a
 * ---------------------------------------------------------
 * Title:			Unit Tests for bubble sort
 * Author:			S. Schraml
 * ----------------------------------------------------------
 * Description:
 * Tests functions for bubble sort.
 * ----------------------------------------------------------
 */
#ifndef ___TEST_BUBBLE_SORT_H
#define ___TEST_BUBBLE_SORT_H

#include "shortcut.h"
#include "config.h"

#ifdef LIST_VARIANT
TEST(test_bubble_sort_list_ascending);
TEST(test_bubble_sort_list_decending);
#else 
TEST(test_bubble_sort_array_ascending);
TEST(test_bubble_sort_array_descending);
#endif

#endif
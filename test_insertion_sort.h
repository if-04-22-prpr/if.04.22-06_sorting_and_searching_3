/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: n/a
 * ---------------------------------------------------------
 * Title:			Unit Tests for insertion sort
 * Author:			S. Schraml
 * ----------------------------------------------------------
 * Description:
 * Tests functions for insertion sort.
 * ----------------------------------------------------------
 */
#ifndef ___TEST_INSERTION_SORT_H
#define ___TEST_INSERTION_SORT_H

#include "shortcut.h"
#include "config.h"

#ifdef LIST_VARIANT
TEST(test_insertion_sort_list_ascending);
TEST(test_insertion_sort_list_decending);
#else 
TEST(test_insertion_sort_array_ascending);
TEST(test_insertion_sort_array_descending);
#endif

#endif
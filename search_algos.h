#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Basic search algorithms */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
/* Helper function */
size_t min(size_t n1, size_t n2);
/* Advanced search algorithms */
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int binary_search_2(int *array, int value, size_t low, size_t high);
int advanced_binary(int *array, size_t size, int value);
int binary_search_3(int *array, int value, size_t low, size_t high);

/**
 * struct listint_s - singly linked list node for jump list
 *
 * @n: Integer stored in the node
 * @index: Index position of the node in the list
 * @next: Pointer to the next node in the list
 *
 * Description: Node structure for a singly linked list
 *              Used specifically for jump list implementation
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/* Linked list search algorithm */
listint_t *jump_list(listint_t *list, size_t size, int value);

/**
 * struct skiplist_s - Skip list node with express lane
 *
 * @n: Integer stored in the node
 * @index: Index position of the node in the list
 * @next: Pointer to the next node in the regular lane
 * @express: Pointer to the next node in the express lane
 *
 * Description: Node structure for a skip list
 *              Includes both regular and express lane pointers
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

/* Skip list search algorithm */
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif

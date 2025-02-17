#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdio.h>
#include <stddef.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer  stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* PRINT Prototypes functions */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* Atlas_sorting_arrays */
void shell_sort(int *array, size_t size);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void merge_sort_recursive(int *array, int left, int right);
void merge(int *array, int left, int middle, int right);

#endif /* SORT_H */

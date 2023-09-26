#include <stdio.h>
#include "sort.h"
/**
 * insertion_sort_list - A function that sorts a doubly linked list of integers
 *                       in ascending order using the Insertion sort algorithm.
 * @list: The list to be sorted.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *newNode = NULL;
	listint_t *current = *list;
	listint_t *next;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	while (current != NULL)
	{
		next = current->next;

		if (newNode == NULL || newNode->n >= current->n)
		{
			current->next = newNode;
			current->prev = NULL;
			if (newNode != NULL)
				newNode->prev = current;
			newNode = current;
		}
		else
		{
			listint_t *tmp = newNode;

			while (tmp->next != NULL && tmp->next->n < current->n)
			tmp = tmp->next;

			current->next = tmp->next;

			if (tmp->next != NULL)
				tmp->next->prev = current;
			tmp->next = current;
			current->prev = tmp;
		}

		current = next;
		if (current != NULL)
			current->prev = NULL;
		*list = newNode;
		print_list(*list);
	}
}

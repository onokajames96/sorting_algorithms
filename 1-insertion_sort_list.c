#include <stdio.h>
#include "sort.h"
/**
 * insertion_sort_list - A function that sorts a doubly linked list of integers
 *                       in ascending order using the Insertion sort algorithm.
 * @list: The list to be sorted.
 */
void insertion_sort_list(listint_t **list)
{
listint_t *current, *prev, *next;

if (list == NULL || *list == NULL || (*list)->next == NULL)
return;

current = (*list)->next;

while (current != NULL)
{
next = current->next;

while (current->prev != NULL && current->prev->n > current->n)
{
prev = current->prev;

if (prev->prev)
prev->prev->next = current;
else
*list = current;

prev->next = next;
current->prev = prev->prev;
current->next = prev;
prev->prev = current;

if (next)
next->prev = prev;

print_list(*list);
}

current = next;
}
}

#include "sort.h"

/**
 * insertion_sort_list - function that sorts a doubly
 * linked list of integers in ascending order using the
 * Insertion sort algorithms
 *
 * @list: linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *cur, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (cur = (*list)->next; cur; cur = cur->next)
	{
		tmp = cur;
		while (tmp->prev != NULL && tmp->n < tmp->prev->n)
		{
			tmp->prev->next = tmp->next;
			if (tmp->next != NULL)
				tmp->next->prev = tmp->prev;

			tmp->next = tmp->prev;
			tmp->prev = tmp->prev->prev;
			tmp->next->prev = tmp;

			if (tmp->prev != NULL)
				tmp->prev->next = tmp;
			else
				*list = tmp;
			print_list(*list);
		}
	}
}

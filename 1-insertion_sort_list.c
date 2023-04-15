#include "sort.h"

/**
 * insertion_sort_list - sort a doubly linked list in asc using insert
 * @list: doubly linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *tmp, *node;

	if (list == NULL)
		exit(0);

	node = *list;
	while (node)
	{
		while (node->next && node->n > node->next->n)
		{
			tmp = node->next;
			node->next = tmp->next;

			if (tmp->next != NULL)
				tmp->next->prev = node;
			tmp->next = node;

			if (node->prev != NULL)
				node->prev->next = tmp;
			tmp->prev = node->prev;
			node->prev = tmp;

			if (tmp->prev == NULL)
				*list = tmp;
			else
				node = tmp->prev;
			print_list(*list);
		}
		node = node->next;
	}
}


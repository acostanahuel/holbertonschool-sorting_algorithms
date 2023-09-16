#include "sort.h"

/**
 * insertion_sort_list - insertion_sort_list
 *
 * @list: list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *ptr = *list;
	listint_t *prevNode = NULL;

	while (ptr)
	{
		while (ptr->prev && (ptr->prev)->n > ptr->n)
		{
			prevNode = ptr->prev;

			prevNode->next = ptr->next;
			(prevNode->prev)->next = ptr;
			ptr->prev = prevNode->prev;
			(ptr->next)->prev = prevNode;
			ptr->next = prevNode;
			prevNode->prev = ptr;

			/** print*/
			print_list(*list);
		}
		ptr = ptr->next;
	}
}
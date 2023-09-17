#include "sort.h"

/**
 * insertion_sort_list - insertion_sort_list
 *
 * @list: list
 */

void
insertion_sort_list(listint_t **list)
{
	listint_t *node, *prox, *ant;

	if (!list || !*list)
		return;

	node = *list;
	
	while (node)
	{ 
		ant = node->prev;
		prox = node->next;
		while (ant && (ant->n > node->n))
		{
			
			ant->next = node->next;
			if (node->next != NULL)
			{
				node->next->prev = ant;
			}
			
			node->next = ant;
			node->prev = ant->prev;
			ant->prev = node;

			
			if (node->prev)
			{
				node->prev->next = node;
			}
			else
			{
				*list = node;
			}
			ant = node->prev;
			print_list(*list);
		}
		node = prox;
	}
}
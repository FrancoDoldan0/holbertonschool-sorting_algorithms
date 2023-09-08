#include "sort.h"

/**
* insertion_sort_list - function sorts doubly linked list in ascending order
*
*@list: double linked list
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *node_to_insert, *insert_node, *prv;

	if (!list || !*list)
	{
		return;
	}

	node_to_insert = *list;

	while ((node_to_insert = node_to_insert->next))
	{
		insert_node = node_to_insert;
		while (insert_node->prev && insert_node->n < insert_node->prev->n)
		{
			prv = insert_node->prev;
			if (insert_node->next)
			{
				insert_node->next->prev = prv;
			}
			if (prv->prev)
			{
				prv->prev->next = insert_node;
			}
			else
				*list = insert_node;

			prv->next = insert_node->next;
			insert_node->prev = prv->prev;
			insert_node->next = prv;
			prv->prev = insert_node;

			print_list(*list);
		}

	}
}

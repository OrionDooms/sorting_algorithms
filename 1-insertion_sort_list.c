#include "sort.h"

void insertion_sort_list(listint_t **list)
{
	listint_t *next, *new_list = NULL, *current = *list;

	while (current != NULL)
	{
		next = current->next;
		current->prev = current->next = NULL;
		sorted_list(new_list, current);
		current = next;
	}
	list = new_list;
}

void sorted_list(listint_t **list, listint_t *new_node)
{
	listint_t *current;

	if (*list->n >= new_node->n)
	{
		new_node->next = *list;
		new_node->next->prev = new_node;
		list = new_node;
	}
	else
	{
		current = *list;
		while (current->next != NULL && current->next->n < new_node->n)
		{
			current = current->next;

		}
		new_node->next = current->next;
		if (current->next != NULL)
			new_node->next->prev = new_node;

		current->next = new_node;
		new_node->prev = current;
	}
}

#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * using the Insertion sort algorithm.
 * @list: Takes in a list of integers.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *sort = NULL, *current = *list, *new_node;

	while (current != NULL)
	{
		new_node = current->next;
		sort_insert(&sort, current);
		print_list(sort);
		current = new_node;
	}
	*list = sort;
}
/**
 * sort_insert - Takes the input from insertion_sort and sorts
 * a doubly linked list of integers using the Insertion sort algorithm.
 * @head: Takes in a list of integers.
 * @new_node: Insert current node.
 */
void sort_insert(listint_t **head, listint_t *new_node)
{
	listint_t *current;

	if (*head == NULL || (*head)->n >= new_node->n)
	{
		new_node->next = *head;
		new_node->prev = NULL;
		if (*head != NULL)
			(*head)->prev = new_node;
		*head = new_node;
	}
	else
	{
		current = *head;
		while (current->next != NULL && current->next->n < new_node->n)
			current = current->next;
		new_node->next = current->next;
		new_node->prev = current;
		if (current->next != NULL)
			current->next->prev = new_node;
		current->next = new_node;
	}
}

#include <stddef.h>
#include "stdlib.h"
#include "lists.h"

/**
 * delete_dnodeint_at_index -  deletes the node at index linked list.
 * @head: pointer to pointer to the first node of the list.
 * @index: unsigned integer defines the position of the node to delete.
 * Return: 1 success , -1 if it fails.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *previous, *next_node;
	unsigned int position;

	current = *head;
	if (current == NULL)
		return (-1);
	position = 0;
	while (current->next != NULL && position < index)
	{
		position++;
		current = current->next;
	}
	if (current == NULL)
		return (-1);
	previous = current->prev;
	next_node = current->next;
	if (previous != NULL)
		previous->next = next_node;
	else
		*head = next_node;
	if (next_node != NULL)
		next_node->prev = previous;
	free(current);
	return (1);
}

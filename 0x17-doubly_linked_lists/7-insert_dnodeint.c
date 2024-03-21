#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index -  inserts a new node at a given position.
 * @h: pointer to pointer to the first node of the linked list.
 * @idx: integer of the position where to insert.
 * @n: integer to be included in the node.
 * Return: address of the new node, or NULL if it failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *previous, *new;
	unsigned int position;

	current = *h;
	if (current == NULL && idx == 0)
		return (add_dnodeint_end(&current, n));
	if (current == NULL && idx != 0)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(&current, n));
	position = 0;
	while (current->next != NULL && position < idx)
	{
		position++;
		current = current->next;
	}
	if (position + 1 == idx)
		return (add_dnodeint_end(h, n));
	if (position + 1 < idx)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	previous = current->prev;
	new->n = n;
	new->prev = previous;
	new->next = current;
	previous->next = new;
	current->prev = new;
	return (new);
}

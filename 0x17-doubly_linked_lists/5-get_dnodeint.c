#include <stddef.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to the first node of the list.
 * @index: integer that points the position of the node to retrieve.
 * Return: the nth node.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int n;

	if (head == NULL)
		return (NULL);
	current = head;
	n = 0;
	while (current->next != NULL && n < index)
	{
		current = current->next;
		n++;
	}
	if (n < index)
		return (NULL);
	return (current);
}

#include <stddef.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: poiters to the head of the list.
 * Return: number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	int n;

	if (h == NULL)
		return (0);
	current = h;
	n = 1;
	while (current->next != NULL)
	{
		current = current->next;
		n++;
	}
	return (n);
}

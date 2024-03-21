#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h:pointer to head of list
 * Return: number of nodes in the list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	int n;

	if (h == NULL)
		return (0);
	current = h;
	n = 0;
	if (current->prev == NULL)
	{
		n++;
		while (current->next != NULL)
		{
			printf("%d\n", current->n);
			current = current->next;
			n++;
		}
		printf("%d\n", current->n);
	}
	else if (current->next == NULL)
	{
		n++;
		while (current->prev != NULL)
		{
			printf("%d\n", current->n);
			current = current->prev;
			n++;
		}
		printf("%d\n", current->n);
	}
	return (n);
}

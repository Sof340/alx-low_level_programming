#include <stddef.h>
#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a linked list.
 * @head: pointer to the first node of the linked list.
 * Return: sum of all the data.
 */

int sum_dlistint(dlistint_t *head)
{
	unsigned int sum;

	if (head == NULL)
		return (0);
	sum = 0;
	while (head->next != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	sum += head->n;
	return (sum);
}

#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint -  function that frees a dlistint_t list.
 * @head: pointer to the first node of the list.
 * Return: nothing.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}

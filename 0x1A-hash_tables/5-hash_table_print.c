#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @@ht: pointer to the hash table.
 * Return: nothing.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int i, first;

	if (ht == NULL)
		return;

	first = 0;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			if (first == 0)
			{
				printf("%s: %s", current->key, current->value);
				first = 1;
			}
			else
				printf(", %s: %s", current->key, current->value);
			current = current->next;
		}
	}
	printf("}\n");
}

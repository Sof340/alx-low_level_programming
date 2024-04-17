#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: pointer to the hash table.
 * Return: nothing.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current, *next;
	unsigned long int i;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (next != NULL)
		{
			next = current->next;
			free(current);
			current = next;
		}
	}
	free(ht->array);
	free(ht);
}

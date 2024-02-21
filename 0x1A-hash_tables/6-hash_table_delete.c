#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: The hash table to delete.
 * Return: nothing.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *temp;
	unsigned long int i;
	if (ht == NULL)
		return;
	
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		if (node == NULL)
			continue;
		
		while (node != NULL)
		{
			free(node->key);
			free(node->value);
			temp = node->next;
			free(node);
			node = temp;
		}

	}
	free(ht->array);
	free(ht);
}


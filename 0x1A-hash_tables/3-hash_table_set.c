#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table..
 * @ht: pointer to the hash table.
 * @key: the key to add.
 * @value: the value to add.
 * Return: 1 if succes, 0 if failure.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new, *current;
	int collision;

	if (key[0] == '\0' || ht == NULL || key == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);

	if (ht->array[index] == NULL)
		ht->array[index] = new;
	else
	{
		collision = 0;
		current = ht->array[index];
		while (current != NULL)
		{
			if (strcmp(current->key, new->key) == 0)
			{
				current->value = strdup(value);
				free(new);
				collision = 1;
				break;
			}
			current = current->next;
		}
		if (collision == 0)
		{
			new->next = ht->array[index];
			ht->array[index] = new;
		}
	}

	return (1);
}

#include <stdlib.h>
#include <stddef.h>
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
	hash_node_t *current, *new;

	if (key[0] == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);

	current = ht->array[index];
	if (current == NULL)
	{
		current = (hash_node_t *)malloc(sizeof(hash_node_t));
		if (current == NULL)
			return (0);
		current->key = (char *)key;
		current->value = (char *)value;
		current->next = NULL;
		return (1);
	}
	new = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = (char *)key;
	new->value = (char *)value;
	new->next = current;
	return (1);
}

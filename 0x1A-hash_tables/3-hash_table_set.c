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
	hash_node_t *current;

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
	{
		current = ht->array[index];
		current = (hash_node_t *)malloc(sizeof(hash_node_t));
		if (current == NULL)
			return (0);
		current->key = (char *)key;
		current->value = (char *)value;
		current->next = NULL;
		return (1);
	}
	current = ht->array[index];
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (current == NULL)
		return (0);
	current = current->next;
	current->key = (char *)key;
	current->value = (char *)value;
	current->next = NULL;
	return (1);
}

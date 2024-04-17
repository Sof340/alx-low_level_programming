#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: pointer to the hash table.
 * @key: the key to retrieve the value associated with.
 * Return: the value if succes, NULL if failure.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	int index;

	if (ht == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);

	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}

#include<stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: pointer to the hash table
 * @key: the key
 * @value: the value associated to the key
 * Return: 1 if succes ,0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	unsigned long int index;
	
	if (key == NULL)
		return 0;
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return 0;
	new->key = (char *)key;
	new->value = (char *)value;
	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new;
		new->next = NULL;
	}
	else
	{
		new->next = ht->array[index];
		ht->array[index] = new;
	}
	return 1;
}


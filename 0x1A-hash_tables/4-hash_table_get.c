#include<stdlib.h>
#include<string.h>
#include "hash_tables.h"

/**
 * hash_table_get - function returns the value associatd to a key
 * @ht: hash table to read from
 * @key: the key associated with the value to retrieve
 * Return: return the  value if succes, otherwise NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
        hash_node_t *temp;

	if (ht == NULL || key == NULL || *key == '\0')
		return 0;

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	if (ht->array[index] == NULL)
		return NULL;

	while (strcmp(temp->key, key) != 0)
	{
		if (temp == NULL)
			break;
		temp = temp->next;
	}
	if (strcmp(temp->key, key) == 0)
		return temp->value;
	else
		return NULL;
}

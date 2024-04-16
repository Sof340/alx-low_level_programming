#include <stddef.h>
#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_table_create - a function that creates a hash table.
 * @size: the size of the hash table (the array length).
 * Return: pointer to the hash table created, NULL if failure.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **arr;
	unsigned long int i;

	table = (hash_table_t *) malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	arr = (hash_node_t **) calloc(size, sizeof(hash_node_t));
	if (arr == NULL)
		return (NULL);

	table->size = size;
	table->array = arr;

	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);

}

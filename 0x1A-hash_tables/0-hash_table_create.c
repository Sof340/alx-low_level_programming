#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long i;
	hash_table_t *hash_table = malloc(sizeof(hash_table_t));
	
	if (hash_table == NULL)
		return NULL;  /* Allocation failed */
	
	
	hash_table->size = size;
	hash_table->array = malloc(size * sizeof(hash_node_t *));
	if (hash_table->array == NULL){
		free(hash_table);
		return NULL;  /* Allocation failed */
	}
	/* Initialize array elements to NULL */
	for (i = 0; i < size; i++)
		hash_table->array[i] = NULL;
	return hash_table;
}


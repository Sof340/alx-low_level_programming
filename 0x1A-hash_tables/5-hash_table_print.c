#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table to print
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int index;
	int printed;

	if (ht ==NULL)
		return;
	printed = 0;
	for (index = 0; index < ht->size; index++)
	{
		temp = ht->array[index];
		if (temp == NULL)
			continue;
		printf("{");
		while (temp != NULL)
		{
			if (printed)
				printf(", ");
			printed = 1;
			printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->next;
		}
		printf("}");
	}
}

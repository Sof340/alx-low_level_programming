#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    hash_node_t *current;
    int i;

    ht = hash_table_create(1024);
    printf("%d\n",hash_table_set(ht, "hetairas", "cool"));
    printf("%d\n",hash_table_set(ht, "mentioner", "cool"));
    for (i = 0; i < 1024; i++)
    {
	    if (ht->array[i] == NULL)
		    continue;
	    else
	    {
		    current = ht->array[i];
		    while (current != NULL)
		    {
			    printf("%s\n", current->key);
			    current = current->next;
		    }
	    }
    }
    return (EXIT_SUCCESS);
}

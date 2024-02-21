#include <stdlib.h>
#include "hash_tables.h"

/**
 * free_list - Frees the memory allocated for a linked list of nodes.
 * @node: Pointer to the head of the linked list.
 */
void free_list(hash_node_t *node)
{
    if (node == NULL)
        return;

    free_list(node->next); // Recursively free the rest of the list
    free(node->key); // Free the key
    free(node->value); // Free the value
    free(node); // Free the node itself
}

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: The hash table to delete.
 */
void hash_table_delete(hash_table_t *ht)
{
    unsigned long int i;

    if (ht == NULL)
        return;

    for (i = 0; i < ht->size; i++)
    {
        free_list(ht->array[i]); // Free each linked list in the array
    }

    free(ht->array); // Free the array itself
    free(ht); // Free the hash table
}


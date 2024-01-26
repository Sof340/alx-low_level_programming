#include "lists.h" /* Include the definition of dlistint_t */

size_t print_dlistint(const dlistint_t *h)
{
    size_t node_count = 0; /* Variable to count the number of nodes*/

    
    while (h != NULL)
    {
        printf("%d\n", h->n);
        h = h->next;
        node_count++; /* Increment the node count*/
    }

    return node_count; 
}


#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_djb2 - hash function according to djb2 algorithm.
 * @str: the input string used to compute.
 * Return: the resulting index.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}

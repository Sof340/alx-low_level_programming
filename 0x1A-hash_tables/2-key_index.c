#include "hash_tables.h"

/**
 * key_index - function that returns the hash table index of a key
 * @key: is the key
 * @size: size of the hash table array
 * Return: index (integer) if succes
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *key++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash % size);
}


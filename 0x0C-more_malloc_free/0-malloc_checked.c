#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * *malloc_checked - allocates memory using malloc
 * @b : unsigned int representing number of bytes to allocate
 *
 * Return: a pointer on succes and 98 on failure.
 */

void *malloc_checked(unsigned int b)
{
	char *f;
	f = malloc(b);
	if (f == NULL)
		exit(98);
	return (f);
}


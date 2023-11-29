#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - function hta tprints a name
 * @name : pointer to the name
 * @f : pointer to a function
 * Return : notiong void
 */


void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}


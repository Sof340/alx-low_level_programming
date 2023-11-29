#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator : function that executes a function given as a parameter on each element of an array.
 * @array : array of parametres
 * @size : size of the array
 * @action : pointer to a function
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || size == 0 || action == NULL)
		return;

	for (; i < size; i++)
		action(array[i]);
}


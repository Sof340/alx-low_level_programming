#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: create array of size size and assign char c
 * Return: NULL if fail
 */

char *create_array(unsigned int size, char c)
{
unsigned int i = 0;
char *array;
array = malloc(sizeof(char) * size);
if (size == 0 || array == NULL)
return (NULL) ;

while (i < size)
{
	array[i] = c;
	i++;

}
return (array);
}


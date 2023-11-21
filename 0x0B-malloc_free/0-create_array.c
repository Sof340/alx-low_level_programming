#include "main.h"
#include <stdlib.h>


char *create_array(unsigned int size, char c)
{
unsigned int i=0;
char *array;
array = malloc(sizeof(char)*size);
if (size == 0 || array == NULL){return (NULL);}
while(i<size){
	array[i]= c;
	i++;

}
return (array);
}


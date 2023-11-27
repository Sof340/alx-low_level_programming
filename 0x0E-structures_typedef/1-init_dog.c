#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 * @d : memmory address of the variable
 * @name : pointer to the value of  name
 * @age : value of age of the variable
 * @owner : pointer to owner
 * Return : Nothing 
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
	
}


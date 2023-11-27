#include <stdio.h>
#include "dog.h"
/**
 * print_dog -  prints a struct dog
 * @d : variable type struct dog
 */





void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil\n)");
	else
		printf("Name: %s\n", d->name);
	printf("Name: %.6f\n", d->age);
	if (d->owner == NULL)
                printf("Name: (nil)\n");
        else
                printf("Name: %s\n", d->owner);
}


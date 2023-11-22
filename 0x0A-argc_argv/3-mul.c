#include <stdio.h>
#include "main.h"
/**
 * main - print the result of the multiplication of 2 numbers
 * @argc : number of arguments 
 * @argv : array of arguments
 * Return : 0 always success
 */

int main(int argc, char **argv)
{
	int b, a;
	
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%d\n", a * b);
	return (0);
}


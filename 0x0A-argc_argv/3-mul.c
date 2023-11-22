#include <stdio.h>
#include "main.h"
/**
 * main - print the result of the multiplication of 2 numbers
 * @argc : number of arguments 
 * @argv : array of arguments
 * Return : 0 always success
 */

int main(int argc,char **argv)
{
	int count, i, k;
	count = i = 1;
	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	for (; i < argc ; i++)
	{
		k = atoi(argv[i]);
		count = count * k;
	}
	printf("%d\n",count);
	return (0);
}


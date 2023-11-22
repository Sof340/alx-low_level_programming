#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments including the first one
 * @argc : number of arguments
 * @argv : array of arguments
 * Return : 0 always a succes
 */

int main(int argc, char **argv)
{
	int i;
	i = 0;
	for (; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}


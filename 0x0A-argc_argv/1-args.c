#include <stdio.h>
#include "main.h"

/**
 * main - prints number of arguments
 * @argc : number of arguments
 * @argv : array of arguments
 * Return : 0 always a succes
 */

int main(int argc, char **argv)
{
	(void) argv;
	printf("%d\n", argc);
	return (0);
}


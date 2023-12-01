#include <stdio.h>
#include "variadic_functions.h"
#include <stdlib.h>
/**
 * print_numbers - function that prints numbers followed by a new line
 * @separator : separator between numbers
 * @n : number of numbers
 * Return : Nothing --- void 
 */



void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int s;

	if (separator == NULL)
		separator = "";
	 if (n <= 0)
        {
                printf("\n");
                return;
        }
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, int);
		if (i == (n - 1))
			printf("%d\n", s);
		else
			printf("%d%s", s, separator);
	}
	va_end(ap);
}


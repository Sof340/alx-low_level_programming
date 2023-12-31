#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line
 * @separator : separator between numbers
 * @n : number of numbers
 * Return : Nothing
 */



void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *s;

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
		s = va_arg(ap, char *);
		if (s == NULL)
		{
			if (i == (n - 1))
				printf("(nil)\n");
			else
				printf("(nil)%s", separator);
		}
		else if (i == (n - 1))
			printf("%s\n", s);
		else
			printf("%s%s", s, separator);
	}
	va_end(ap);
}


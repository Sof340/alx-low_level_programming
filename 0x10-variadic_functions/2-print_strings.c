#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints strings, followed by a new line
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
		return;
	va_start (ap , n);
	for (i = 0; i < n; i++)
	{
		s = va_arg (ap, char *);
		if (s == NULL)
		{
			if (i == (n - 1))
				printf("(nill)\n");
			else
				printf("(nill)%s",separator);
		}
		else if (i == (n - 1))
			printf("%s\n", s);
		else
			printf("%s%s ", s, separator);
	}
	va_end (ap);
}


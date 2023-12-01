#include <stdio.h>
#include "variadic_functions.h"

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

	if (separator == NULL)
		return;
	va_start(ap , n);
	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
			printf("%d\n", va_arg(ap, int));
		else
			printf("%d%s", va_arg(ap, int), separator);
	}
	va_end(ap);
}


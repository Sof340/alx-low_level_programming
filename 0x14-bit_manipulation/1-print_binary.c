#include "main.h"

/*
 * print_binary - function that prints base 2 of a decimal
 * @n : number to print
 * Return : nothing
 */

void print_binary(unsigned long int n)
{
	int k;
	int length = 0, i;
	float d = n;
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n == 1)
	{
		_putchar('1');
		return;
	}

	while (1 <= d)
	{
		d = d * 0.5;
		length++;
	}



	for (i = 0; i < length; i++)
	{
		d = d * 2;
                k = d;
		while (k >= 2)
                        k -= 2;
		if (k == 0)
			_putchar('0');
		else 
			_putchar('1');
	}

	return;
}


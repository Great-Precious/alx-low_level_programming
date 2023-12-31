#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int a, counted = 0;
	unsigned long int cur;

	for (a = 63; a >= 0; a--)
	{
		cur = n >> a;

		if (cur & 1)
		{
			_putchar('1');
			counted++;
		}
		else if (counted)
			_putchar('0');
	}
	if (!counted)
		_putchar('0');
}

#include "main.h"
/**
 * print_binary - converts integers to binary.
 * @ap: variadic function.
 * Return: integer
 */
int print_binary(va_list ap)
{
	int count1 = 0;
	int cont = 0;
	int i, a = 1, b;
	unsigned int number = va_arg(ap, unsigned int);
	unsigned int q;

	for (i = 0; i < 32; i++)
	{
		q = ((a << (31 - i)) & number);
		if (q >> (31 - i))
			count1 = 1;
		if (count1)
		{
			b = q >> (31 - i);
			_putchar(b + 48);
			cont++;
		}
	}
	if (cont == 0)
	{
		cont++;
		_putchar('0');
	}
	return (cont);
}

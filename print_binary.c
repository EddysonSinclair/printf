#include "main.h"
/**
 * print_binary - converts integers to binary.
 * @ap: variadic function.
 * Return: integer
 */
int print_binary(va_list ap)
{
	int flags = 0;
	int cont = 0;
	int i, a = 1, b;
	unsigned int nums = va_arg(val, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((a << (31 - i)) & nums);
		if (p >> (31 - i))
			flags = 1;
		if (flags)
		{
			b = p >> (31 - i);
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

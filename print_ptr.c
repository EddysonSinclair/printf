#include "main.h"
/**
 * print_ptr - prints address.
 * @ap: variables
 * Return: int.
 */
int print_ptr(va_list ap)
{
	void *p;
	char *a = "(nil)";
	long int b;
	int i, c;

	p = va_arg(ap, void *);

	if (p == NULL)
	{
		for (i = 0; a[i] !=  '\0'; i++)
		{
			_putchar(a[i]);
		}
		 return (i);

	}
	b = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	c = even_more_hex(b);
	return (c + 2);


}

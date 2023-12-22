#include "main.h"

/**
 * printchar - prints a character.
 * @ap: arguments.
 * Return: integer.
 */
int printchar(va_list ap)
{
	char s;
	int count;

	s = va_arg(ap, int);

	_putchar(s);

	return (1);
}

#include "main.h"

/**
 * printchar - prints a character.
 * @ap: arguments.
 * Return: count.
 */
int printchar(va_list ap)
{
	char s;
	int count;

	s = va_arg(ap, int);
	count = _strlen(s);

	_putchar(s);

	return (count);
}

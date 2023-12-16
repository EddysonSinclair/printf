#include "main.h"

/**
 * printstring - prints string
 * @ap: string
 * Return: count
 */

int printstring(va_list ap)
{
	char *str;
	int i, count;

	str = va_arg(ap, char *);
	if (str == NULL)
	{
		str = "(null)";
		count = _strlen(str);
		for (i = 0; i < count; i++)
			_putchar(str[i]);
		return (count);
	}
	else
	{
		count = _strlen(str);
		for (i = 0; i < count; i++)
			_putchar(str[i]);
		return (count);
	}
}

#include "main.h"

/**
 * printstring - prints string
 * @str: string
 * Return: zero
 */
int printstring(const char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
	return (0);
}

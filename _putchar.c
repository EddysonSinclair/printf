#include "main.h"

/**
 * _putchar - function that prints a char.
 * @n: integer used.
 * Return: zero.
 */


int _putchar(char n)
{
	return (write(1, &n, 1));
}

#include "main.h"

/**
 * _putchar - function that prints a char
 * @n: char used
 * Return: zero
 */

int _putchar(char *n)
{
	return (write(1, &n, 1));
}

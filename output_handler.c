#include "main.h"

/**
 * output_handler- handles the output
 * @specifier: conversion specifier
 * @ap: argument pointer
 * Return: zero
 */

int output_handler(const char *specifier, va_list ap)
{
	int count;

	count = 0;
	switch (*specifier)
	{
		case 'c':
			count += _putchar(va_arg(ap, int));
			break;
		case 's':
			count += printstring(va_arg(ap, char*));
			break;
		case 'i':
			count += print_num(va_arg(ap, int), 10);
			break;
		case 'd':
			count += print_num(va_arg(ap, int), 10);
			break;
		case 'u':
			count += print_num(va_arg(ap, int), 10);
			break;
		case 'o':
			count += print_num(va_arg(ap, int), 8);
			break;
		case 'x':
			count += print_num(va_arg(ap, int), 16);
			break;
		case 'X':
			count += print_num(va_arg(ap, int), 16);
			break;
		case '\0':
			return (-1);
		default:
			count += _putchar('%');
			count += write(STDOUT_FILENO, &(*specifier), 1);
			break;
	}
	return (count);
}


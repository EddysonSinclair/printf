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
	if (*specifier == 'c')
		count += _putchar(va_arg(ap, int));
	else if (*specifier == 's')
		count += printstring(va_arg(ap, char*));
	else if (*specifier == 'i')
		count += print_integer(ap);
	else if (*specifier == 'd')
		count += print_integer(ap);
	else if (*specifier == 'u')
		count += print_decimal_unsignedint(ap);
	else if (*specifier == 'o')
		count += print_octal(ap);
	else if (*specifier == 'x')
		count += print_hexadecimal(ap, 0);
	else if (*specifier == 'X')
		count += print_hexadecimal(ap, 1);
	else if (*specifier == 'b')
		count += print_binary(ap);
	else if (*specifier == 'R')
	{
		char *str_arg = va_arg(ap, char*);
		rot13(str_arg);
		count += printstring(str_arg);
	}
	else if (*specifier == 'r')
	{
		char *str_arg = va_arg(ap, char*);
		reverse_string(str_arg);
		count += printstring(str_arg);
	}
	else if (*specifier == '\0')
		return (-1);
	else if (*specifier == '%')
	{
		count += _putchar('%');
		count += write(STDOUT_FILENO, &(*specifier), 1);
	}
	else
		count += write(1, &(*specifier), 1);
	return (count);
}


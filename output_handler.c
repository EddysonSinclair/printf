#include "main.h"

/**
 * output_handler- handles the output
 * @specifier: conversion specifier
 * @ap: argument pointer
 * Return: zero
 */

int output_handler(const char *specifier, va_list ap)
{
	int count,c;
	char *s;

	count = 0;
	switch (*specifier)
	{
		case 'c':
			c = va_arg(ap, int);
			{
				_putchar(c);
				count++;
			}
			break;
		case 's':
			s = printstring(va_arg(ap, char*));
			{
				count++;
			}
			break;
		case 'i':
		case 'd':
			count += print_decimal(ap);
			break;
		case 'u':
			count += print_decimal_unsigned(ap);
			break;
		case 'b':
			count += print_binary(ap);
			break;
		case 'o':
			count += print_octal(ap);
			break;
		case 'x':
			count += print_hexadecimal(ap, 0);
			break;
		case 'X':
			count += print_hexadecimal(ap, 1);
			break;
		case 'R':
			{
				char *str_arg = va_arg(ap, char*);
				rot13(str_arg);
				count += printstring(str_arg);
			}
			break;
		case 'r':
			{
				char *str_arg = va_arg(ap, char*);
				reverse_string(str_arg);
				count += printstring(str_arg);
			}
			break;
		case '\0':
			return (-1);
		default:
			 _putchar('x');
			count++;
			break;
	}
	return (count);
}


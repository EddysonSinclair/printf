#include "main.h"

/**
 * output_handler- handles the output
 * @specifier: conversion specifier
 * @ap: argument pointer
 * Return: zero
 */

int output_handler(const char *specifier, va_list ap)
{
	int count, c;
	char *s;

	count = 0;
	switch (*specifier)
	{
		case '%':
			_putchar('%');
			break;
		case 'c':
			c = va_arg(ap, int);
			{
				_putchar(c);
				count++;
			}
			break;
		case 's':
			s = va_arg(ap, char*);
			{
				printstring(s);
				count++;
			}
			break;
		case 'u':
			count += print_decimal_unsignedint(ap);
			break;
		case 'r':
			{
				char *str_arg = va_arg(ap, char*);
				reverse_string(str_arg);
				count += printstring(str_arg);
			}
			break;
		case 'R':
			{
				char *str_arg = va_arg(ap, char*);
				rot13(str_arg);
				count += printstring(str_arg);
			}
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
		case 'i':
		case 'd':
			count += print_integer(ap);
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


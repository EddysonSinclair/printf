#include "main.h"

/**
 * output_handler- handles the output
 * @format: conversion specifier
 * @ap: argument pointer
 * Return: zero
 */

int output_handler(const char *format, va_list ap)
{
	int count;
	char c, *str;

	count = 0;
	switch (*format)
	{
		case 'c':
			c = (char)va_arg(args, int);
			_putchar(c);
			count++;
			break;
		case 's':
			str =  va_arg(args, char *);
			while (*str != '\0')
			{
				_putchar(*str);
				str++;
				count++;
			}
			break;
		case '%':
			_putchar('%');
			count++;
			break;
		default:
			break;
	}
	return (0);
}

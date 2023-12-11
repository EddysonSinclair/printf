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
			c = (char)va_arg(ap, int);
			write(1, &c, 1);
			count++;
			break;
		case 's':
			str =  va_arg(ap, char *);
			while (*str != '\0')
			{
				write(1, str, 1);
				str++;
				count++;
			}
			break;
		case '%':
			if (write (1, "%", 1) == -1)
			{
				return (-1);
			}
			count++;
			break;
		default:
			break;
	}
	return (count);
}

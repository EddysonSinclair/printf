#include "main.h"

/**
 * _printf - main function
 *
 * @format: argument format
 * Return: zero
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int count;

	if (format == NULL);
	return (-1);
	
	va_start ap;
	count = 0;

	while (format != '\0')
	{
		if (*format == '%')
		{
			++format;
			count += output_handler(format, ap);
		}
		else
			count += _putchar(*format);
		++format;
	}
	va_end ap;
	return (count);
}

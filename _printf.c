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

	if (format == NULL)
		return (-1);
	va_start(ap, format);
	count = 0;
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format != '\0')
				output_handler(format, ap);
		}
		else
		{
			write(1, format, 1);
			count++;
		}
		format++;
	}
	va_end(ap);
	return (count);
}

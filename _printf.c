#include "main.h"

/**
 * _printf - main function
 *
 * @format: argument format
 * Return: zero
 */

int _printf(const char * const format, ...)
{
	convert_match m[] = {
		{"%s", printstring}, {"%c", printchar},
		{"%%", printperct}, {"%i", printinteger}, {"%d", printdec},
		{"%b", print_binary}, {"%u", print_unsignedint}, {"%o", print_octal},
		{"%x", print_hexa}, {"%X", print_hexadecimal}, 

	};

	va_list args;
	int i = 0, j, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 9;
		while (j >= 0)
		{
			if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
			{
				len += m[j].f(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(args);
	return (len);
}

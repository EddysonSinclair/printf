#include "main.h"

/**
 * print_dec - prints decimal
 * @args: argument to print
 * Return: number of characters printed
 */

int print_decimal(va_list ap)
{
	int n = va_arg(ap, int);
	int count = 0;


	if (n < 0)
	{
		count += _putchar('-');
		n = -n;
	}

	if (n == 0)
	{
		count += _putchar('0');
		return (count);
	}

	if (n / 10 != 0)
	{
		count += print_decimal(n/10);
	}

	count += _putchar(n % 10 + 0);

	return (count);
}

/**
 * print_decimal_unsigned - prints unsigned int
 * @ap: argument pointer
 * Return: count
 */
int print_decimal_unsigned(va_list ap)
{
	unsigned int num = va_arg(ap, unsigned int);
	int count = 0;

	if (num == 0)
	{
		count += _putchar('0');
		return (count);
	}

	if (num / 10 != 0)
	{
		count += print_decimal_unsigned(ap);
	}

	count += _putchar(num % 10 + '0');

	return (count);
}

/**
 * print_binary - prints binary
 * @ap: argument pointer
 * Return: count
 */
int print_binary(va_list ap)
{
	unsigned int num = va_arg(ap, unsigned int);
	int count = 0;

	if (num == 0)
	{
		count += _putchar('0');
		return (count);
	}

	if (num / 2 != 0)
	{
		count += print_binary(ap);
	}

	count += _putchar(num % 2 + '0');

	return (count);
}

/**
 * print_hexadecimal - prints hexadecimal
 * @p: argument pointer
 * @uppercase: uppercase integer
 * Return: count
 */
int print_hexadecimal(va_list ap, int uppercase)
{
	unsigned int num = va_arg(ap, unsigned int);
	int count = 0;
	char digit;

	if (num == 0)
	{
		count += _putchar('0');
		return (count);
	}

	if (num / 16 != 0)
	{
		count += print_hexadecimal(ap, uppercase);
	}

	digit = (num % 16 < 10) ? (num % 16 + '0') : (num % 16 - 10 + (uppercase ? 'A' : 'a'));
	count += _putchar(digit);

	return (count);
}

/**
 * print_octal - prints octal
 * @ap: argument pointer
 * Return: count
 */
int print_octal(va_list ap)
{
	unsigned int num = va_arg(ap, unsigned int);
	int count;

	count = 0;
	if (num == 0)
	{
		count += _putchar('0');
		return (count);
	}

	if (num / 8 != 0)
	{
		count += print_octal(ap);
	}

	count += _putchar(num % 8 + '0');

	return (count);
}

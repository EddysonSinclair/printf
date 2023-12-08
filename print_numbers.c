#include "main.h"

/**
 * printf_int - prints integer
 * @args: argument to print
 * Return: number of characters printed
 */
int print_integer(va_list ap)
{
	int n = va_arg(ap, int);
	int num, last = n % 10, digit, exp = 1;
	int  i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}

/**
 * printf_dec - prints decimal
 * @args: argument to print
 * Return: number of characters printed
 */

int print_decimal(va_list ap)
{
	int n = va_arg(ap, int);
	int num, last = n % 10, digit;
	int  i = 1;
	int exp = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
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

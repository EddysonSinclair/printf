#include "main.h"
/**
 * printinteger - prints integer
 * @ap: argument to print
 * Return: number of characters printed
 */
int printinteger(va_list ap)
{
	int a = va_arg(ap, int);
	int num, last = a % 10, digit, exp = 1;
	int  i = 1;

	a = a / 10;
	num = a;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		a = -a;
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
		num = a;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar((digit % 10) + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}

/**
 * printdec - prints decimal
 * @ap: argument to print
 * Return: number of characters printed
 */

int printdec(va_list ap)
{
	int a = va_arg(ap, int);
	int num, last = a % 10, digit;
	int  i = 1;
	int exp = 1;

	a = a / 10;
	num = a;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		a = -a;
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
		num = a;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar((digit % 10) + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}

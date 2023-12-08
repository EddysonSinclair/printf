#include "main.h"
/**
 * print_integer - prints integer
 * @ap: argument to print
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
 * print_decimal_unsignedint - prints unsigned int
 * @ap: argument pointer
 * Return: count
 */

int print_decimal_unsignedint(va_list ap)
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
		count += print_decimal_unsignedint(ap);
	}

	count += _putchar(num % 10 == 0 ? '0' : (num % 10) + '0');

	return (count);
}

/**
 * reverse_string - reverses string
 * @str: string to be reversed
 */
void reverse_string(char *str)
{
	int length = strlen(str);
	int start = 0;
	int end = length - 1;

	while (start < end)
	{
		char temp = str[start];

		str[start] = str[end];
		str[end] = temp;

		start++;
		end--;
	}
}

/**
 * rot13 - encodes rot13
 * @str: string pointer
 * Return: str
 */
char *rot13(char *str)
{
	int i;
	int j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == data1[j])
			{
				str[i] = datarot[j];
				break;
			}
		
		}
	}
	return (str);
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
 * @ap: argument pointer
 * @uppercase: uppercase int
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

	count += _putchar('0' + num % 8);

	return (count);
}

#include "main.h"
/**
 * print_hexa- print hexadecimals in capital.
 * @ap: variables.
 * Return: integer.
 */

int print_hexa(va_list ap)
{
	int a; 
	int count = 0;
	int *array;
	unsigned int num = va_arg(ap, unsigned int);
	unsigned int tmp = num;

	while (num / 16 != 0)
	{
		num = num / 16;
		count++;
	}
	count++;
	array = malloc(sizeof(int) * count);
	for (a = 0; a < count; a++)
	{
		array[a] = tmp % 16;
		tmp /= 16;
	}
	for (a = (count - 1); a >= 0; a--)
	{
		if (array[a] > 9)
			array[a] = array[a] + 39;
		_putchar(array[a] + '0');
	}
	free(array);
	return (count);
}

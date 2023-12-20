#include "main.h"
/**
 * even_more_hex- print hexadecimals in capital.
 * @num: variables.
 * Return: integer.
 */

int even_more_hex(unsigned long int num)
{
	long int a;
	long int count = 0;
	long int *array;
	unsigned long int tmp = num;

	while (num / 16 != 0)
	{
		num = num / 16;
		count++;
	}
	count++;
	array = malloc(sizeof(long int) * count);
	if (array == NULL)
		return (-1);
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

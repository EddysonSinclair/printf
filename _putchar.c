#include "main.h"

/**
 * _putchar - function that prints a char
 * @n: integer used
 * Return: zero
 */


int _putchar(int n)
{
	return (write(1, &n, 1));
}


/**
 *rot13 - encodes rot13
 *
 *@str: pointer to string
 *Return:str
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
 * reverse_string - reverses the string
 *
 * @str: pointer to string
 */

void reverse_string(char *str)
{
	int len = strlen(str);
	int start = 0;
	int end = len - 1;

	while (start < end)
	{
		char temp = str[start];
		str[start] = str[end];
		str[end] = temp;

		start++;
		end--;
	}
	
}

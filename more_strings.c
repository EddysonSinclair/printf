#include "main.h"
/**
 * more_strings - print strings.
 * @ap: variable
 * Return: integer.
 */

int more_strings(va_list ap)
{
	char *S;
	int i, len = 0;
	int values;

	S = va_arg(ap, char *);

	if (S == NULL)
		S = "(null)";
	for (i = 0; S[i] != '\0'; i++)
	{
		if (S[i] < 32 || S[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			values = S[i];
			if (values < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + more_HEX(values);

		}
		else
		{
			_putchar(S[i]);
			len++;
		}

	}
	return (len);
}

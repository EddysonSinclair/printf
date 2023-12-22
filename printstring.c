#include "main.h"
/**
 * printstring - print a string.
 * @ap: argument.
 * Return: the length of the string.
 */
int printstring(va_list ap)
{
    char *s;
    int i, len;

    s = va_arg(ap, char *);
    if (s == NULL)
    {
        s = "(null)";
    }

    len = _strlen(s);
    for (i = 0; i < len; i++)
    {
        _putchar(s[i]);
    }

    return len;
}

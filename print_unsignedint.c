#include "main.h"
/**
 * print_unsignedint - print non negative numbers.
 * @ap: print variadic variables.
 * Return: integer.
 */
int print_unsignedint(va_list ap)
{
        unsigned int a = va_arg(ap, int);
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

#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>



/**
 * struct reference - match the conversion specifiers for printf
 * @id: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @f: type pointer to function for the conversion specifier
 *
 */

typedef struct reference
{
	char *id;
	int (*f)();
} convert_match;

int _printf(const char *format, ...);
int _putchar(char c);
int printchar(va_list ap);
int printinteger(va_list args);
int print_hexadecimal(va_list ap);
int print_binary(va_list ap);
int printdec(va_list args);
int print_octal(va_list ap);
int printstring(va_list ap);
char *rot13(char *str);
int printperct(void);
int _strlenk(const char *s);
int _strlen(char *s);
void reverse_string(char *str);
int print_unsignedint(va_list ap);
int print_hexa(va_list ap);
int more_HEX(unsigned int);
int more_strings(va_list ap);
int even_more_hex(unsigned long int);
int print_ptr(va_list ap);
#endif

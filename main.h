#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

typedef struct reference
{
	char *id;
	int (*f)();
} convert_match;

int _printf(const char *format, ...);
int _putchar(int n);
int printchar(va_list ap);
int printinteger(va_list args);
int print_hexadecimal(va_list ap, int uppercase);
int print_binary(va_list ap);
int printdec(va_list args);
int print_octal(va_list ap);
int printstring(va_list ap);
char *rot13(char *str);
int printperct(void);
int _strlenk(const char *s);
int _strlen(char *s);
void reverse_string(char *str);
#endif

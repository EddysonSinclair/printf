#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

int _printf(const char *format, ...);
int output_handler(const char *format, va_list ap);
int _putchar(char n);
int print_num(va_list args);
int printstring(const char *str);
#endif

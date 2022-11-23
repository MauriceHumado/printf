#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <limits.h>

int _printf(const char *format, ...);
int (*get_func(char x))(va_list args);
int print_c(va_list args);
int print_s(va_list args);
int print_percent(va_list args);
int _putchar(char c);

/**
 * struct specifier - struct specifier
 * @valid: the valid character
 * @f: the functions associated
 */

typedef struct specifier
{
	char *valid;
	int (*f)(va_list);
} spec;

#endif
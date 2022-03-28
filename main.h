#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct check - struct to check the output acording to the format
 * @c: format
 * @f: pointer to function
 * Return: 0
 */

typedef struct check
{
	char *c;
	int (*f)(va_list);
} checker;

int _printf(const char *format, ...);
int _putchar(char c);
int print_c(va_list arg);
int print_s(va_list arg);
int print_pc(va_list arg);
int print_i(va_list arg);
int print_d(va_list arg);
int print_b(va_list arg);
int (*get_function(const char *format))(va_list);

#endif /*MAIN_H*/

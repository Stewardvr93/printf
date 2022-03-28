#include "main.h"

/**
 * get_function - search an equal value in the list
 * @format: operator to compare
 *
 * Return: pointer with the specific data to function list
 */

int (*get_function(const char *format))(va_list)
{
	checker type[] = {
		{"c", print_c},
		{"s", print_s},
		{"%", print_pc},
		{"d", print_d},
		{"i", print_i},
		{"b", print_b},
		{NULL, NULL}};
	int counter = 0;

	for (; type[counter].c; counter++)
	{
		if (*format == *(type[counter].c))
			return (type[counter].f);
	}

	return (NULL);
}

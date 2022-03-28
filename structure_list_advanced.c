#include "main.h"

/**
 * print_b - print a integrer to binary
 * @arg: pointer to argument
 *
 * Return: length of binary
 */

int print_b(va_list arg)
{
	int d[100];
	int bin[100];
	int i, m = 0;
	int store = 0, v = 0;

	d[0] = va_arg(arg, int);

	if(d[0] == 1)
	{
		store = store + _putchar(1 + '0');
		v++;
	}

	for (i = 0; d[i] != 1; i++)
	{
		d[i + 1] = d[i] / 2;
		bin[i] = d[i] % 2;
		if (d[i + 1] == 1)
			bin[i + 1] = 1;
	}

	for (m = i; m >= 0 && v == 0; m--)
		store = store + _putchar(bin[m] + '0');

	return (store);
}

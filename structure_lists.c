#include "main.h"

/**
 * print_c - print a simple character
 * @arg: pointer to list arguments
 *
 * Return: 0
 */

int print_c(va_list arg)
{
	_putchar(va_arg(arg, int));
	return (1);
}

/**
 * print_s - print a simple string
 * @arg: pointer to list arguments
 *
 * Return: 0
 */

int print_s(va_list arg)
{
	int length = 0;
	char *str = va_arg(arg, char *);

	if (!str)
		str = "(null)";

	for (; str[length]; length++)
		_putchar(str[length]);

	return (length);
}

/**
 * print_pc - print a simple porcentage
 * @arg: pointer to list arguments
 *
 * Return: 0
 */

int print_pc(va_list arg)
{
	(void)arg;
	return (write(1, "%", 1));
}

/**
 * print_i - print a integrer
 * @arg: pointer to list arguments
 *
 * Return: 0
 */

int print_i(va_list arg)
{
	int size = 0;

	size = print_d(arg);
	return (size);
}

/**
 * print_d - print a double number
 * @arg: pointer to list arguments
 *
 * Return: number
 */

int print_d(va_list arg)
{
	int number;
	unsigned int positive, size_d, obs_size_d = 1, store = 0;

	number = va_arg(arg, int);

	if (number < 0)
	{
		store = store + _putchar('-');
		positive = number * -1;
	}
	else
		positive = number;

	size_d = positive;
	while (size_d > 9)
	{
		size_d = size_d / 10;
		obs_size_d = obs_size_d * 10;
	}
	while (obs_size_d >= 1)
	{
		store = store + _putchar(((positive / obs_size_d) % 10) + '0');
		obs_size_d = obs_size_d / 10;
	}

	return (store);
}

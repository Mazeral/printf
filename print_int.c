#include "main.h"

/**
 * print_integer - function that prints integer
 * @args: argument to be printed
 * Return: int
 */
int print_integer(va_list args)
{
	int n = va_arg(args, int);
	int num = (n < 0) ? -n : n;
	int last_digit, exp = 1, count = 0;

	if (n < 0)
	{
		_putchar('-');
		count++;
	}

	do {
		exp *= 10;
	}

	while (num / exp != 0);

	do {
		exp /= 10;
		last_digit = num / exp;
		_putchar(last_digit + '0');
		count++;
		num %= exp;
	}

	while (exp > 1);
	return (count);
}

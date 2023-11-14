#include "main.h"
/**
 * print_decimal - function that prints integer
 * @args: argument to be printed
 * Return: int
 */

int print_decimal(va_list args)
{
	int n = va_arg(args, int);
	int num, la_dig = n % 10, dig;
	int  i = 1, exp = 1, count = 0;

	n = n / 10;
	num = n;

	if (la_dig < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		la_dig = -la_dig;
		i++;
		count++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}

		num = n;

		while (exp > 0)
		{
			dig = num / exp;
			_putchar(dig + '0');
			num = num - (dig * exp);
			exp = exp / 10;
			i++;
			count++:
		}
	}
	_putchar(la_dig + '0');
	count++;

	return (i);
}

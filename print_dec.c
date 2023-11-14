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
int exp = 1, count = 0;
n = n / 10;
num = n;

if (la_dig < 0)
{
_putchar('-');
num = -num;
n = -n;
la_dig = -la_dig;
count += 1;
}

if (num > 0)
{
while (num / exp != 0)
{
exp *= 10;
}
num = n;
while (exp > 0)
{
dig = num / exp;
_putchar(dig + '0');
num = num % exp;
exp = exp / 10;
count += 1;
}
}

_putchar(la_dig + '0');

return (count);
}

#include "main.h"
#include<stdarg.h>

/**
 * format - chooses the right format for the function
 * @arg: The va_list variable
 * @c: The letter of the format
 * Return: Nothing
 */

void format(char c, va_list arg)
{
if (c == 'c')
{
print_char(va_arg(arg, int));
}
if (c == 's')
{
print_string(va_arg(arg, char*));
}
if (c == 'd' && c == 'i')
{
print_integer(arg);
}
if (c == 'f')
{
print_decimal(arg);
}
}

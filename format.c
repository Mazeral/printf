#include "main.h"
#include<stdarg.h>

/**
 * format - chooses the right format for the function
 * @args: The va_list variable
 * Return: Nothing
 */

void format(char c, va_list arg)
{
if (c == 'c')
{
print_char(arg);
}
if (c == 's')
{
print_string(arg);
}
}
if (c == 'd' && c == 'i')
{
print_dec(arg);
}
if (c == 'f')
{
print_dec(arg);
}

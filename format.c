#include "main.h"
#include<stdarg.h>

/**
 * format - chooses the right format for the function
 * @arg: The va_list variable
 * @c: The letter of the format
 * Return: Nothing
 */

int format(char c, va_list arg)
{
if (c == 'c')
{
return (print_char(va_arg(arg, int)));
}
if (c == 's')
{
return (print_string(va_arg(arg, char*)));
}
if (c == 'd' && c == 'i')
{
return (print_integer(arg));
}
if (c == 'f')
{
return (print_decimal(arg));
}
return (0);
}

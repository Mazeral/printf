#include "main.h"
#include<stdarg.h>

/**
 * _printf - a mimic function for the real printf
 * @s: The string
 * Return: The number of characters printed
 */
int _printf(const char *s, ...)
{
va_list args;
unsigned int i;
int p = 0;
va_start(args, s);
if (s == NULL)
return (-1);
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == '%')
{
p += format(s[i + 1], args);
i++;
}
else
{
_putchar(s[i]);
p++;
}
}
va_end(args);
return (p);
}

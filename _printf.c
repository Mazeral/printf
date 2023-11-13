#include "main.h"
#include<stdarg.h>

/**
 * _printf - a mimic function for the real printf
 * @s: The string
 * Retrun: Nothing
 */

void _printf(char *s, ...)
{
va_list args; 
unsigned int i;
va_start(args ,s);
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == '%')
{
format(s[i + 1], args);
i++;
}
else
_putchar(s[i]);
} 
va_end(args);
return;
}

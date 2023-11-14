#include "main.h"
#include<stdarg.h>

/**
 * _printf - a mimic function for the real printf
 * @s: The string
 * Retrun: Nothing
 */
void _printf(const char *s, ...)
{
	va_list args;
	unsigned int i;
	int p = 0;

	va_start(args, s);

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '%')
		{
			format(s[i + 1], args);
			i++;
		}
		else
		{
			_putchar(s[i]);
			p++;
		}
	}
	va_end(args);
	return;
}

#include "main.h"

/**
 * print_string - prints a string
 * @s: The string to print
 * Return: Nothing
 */

void print_string(char *s)
{
unsigned int i = 0;
if (s != NULL)
for (; s[i] != '\0'; i++)
{
if (s[i] == '\')
escape_seq(s[i + 1]);
}
else if (s[i - 1] != '\')
print_char(s[i]);
}
return;
}

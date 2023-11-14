#include "main.h"

/**
 * print_string - prints a string
 * @s: The string to print
 * Return: Nothing
 */

void print_string(const char *s)
{
unsigned int i = 0;
if (s != NULL)
{
for (; s[i] != '\0'; i++)
{
if (s[i] == '\\')
{
escape_seq(s[i + 1]);
i++;
}
else
{
print_char(s[i]);
}
}
}
}

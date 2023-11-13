#include "main.h"
/**
 * escape_seq - chooses and outputs the right escape sequence
 * @c: The char to check
 * Return: Nothing
 */
void escape_seq(char c)
{
if (c == 'n')
{
print_char('\n');
}
if (c == 't')
{
print_char('\t');
}
if (c == 'a')
{
print_char('\a');
}
if (c == 'b')
{
print_char('\b');
}
if (c == 'v')
{
print_char('\v');
}
if (c == 'f')
{
print_char('\f');
}
if (c == 'r')
{
print_char('\r');
}
if (c == '\\')
{
print_char('\\');
}
}

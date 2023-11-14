#include <limits.h>
#include <stdio.h>
#include "main.h"
#include<string.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int print_len = 0;
    int string_len = 0;
    const char s[] = "123";
    const char s2[] = "123";
    print_len = printf("%s%s\n", s, s2);
    string_len = _printf("%s%s\n", s, s2);
    printf("%d\n%d\n", print_len, string_len);
    return (0);
}

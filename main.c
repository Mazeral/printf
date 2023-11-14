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
    const char s[] = "something\n to be\t printed";
    print_len = printf("%s\n", s);
    string_len = _printf("%s\n", s);
    printf("%d\n%d\n", print_len, string_len);
    return (0);
}

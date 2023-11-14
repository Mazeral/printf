#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    const char s[] = "something \t to be printed \n too";
    _printf("%c\n", 'n');
    printf("Let's try to printf a simple sentence %s.\n", "a string");
    printf("\n new line \t tab \nanother new line");
    printf("Let's try to printf a simple sentence %s.\n", s);
    return (0);
}

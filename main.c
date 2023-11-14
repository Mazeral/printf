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
    float flo = 3.14;
    int n1;
    int n2;
    n1 = printf("%f\n", flo);
    n2 = _printf("%f\n", flo);
    printf("%d\n%d\n", n1, n2);
    return (0);
}

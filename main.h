#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include<stdarg.h>
#include<stdlib.h>
int _putchar(int c);
void print_char(int c);
void print_string(char *s);
int print_decimal(va_list args);
int print_integer(va_list args);
void format(char c, va_list arg);
void escape_seq(char c);
void _printf(char *s, ...);
#endif

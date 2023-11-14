#ifndef MAIN_H
#define MAIN_H
#include<unistd.h>
#include<stdarg.h>
#include<stdlib.h>
int _putchar(int c);
int print_char(int c);
int print_string(const char *s);
int print_decimal(va_list args);
int print_integer(va_list args);
int format(char c, va_list arg);
void escape_seq(char c);
int _printf(const char *s, ...);
#endif

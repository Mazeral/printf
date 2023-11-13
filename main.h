#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
int _putchar(char c);
void print_char(char);
void print_string(char *);
int print_decimal(va_list args);
int print_integer(va_list args);
void format(char c, va_list arg);
void escape_seq(char c);
void printf(char *s, ...);
#endif

#ifndef __PRINTF_H__
#define __PRINTF_H__
/*#define INT_MAX*/

#include <limits.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int _putchar(char c);
int print_string(char *s);
int _printf(const char *format, ...);
int print_integer(int n);
int handle_error(void);
int print_binary(unsigned int n);
#endif

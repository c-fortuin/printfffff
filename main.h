#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
/**
 * struct fmt- Struct
 * @fmt: Format
 * @fn: Function
 */
struct fmt
{
	char fmt;
	int (*fn)(va_list, char[], int, int, int, int);
};

typedef struct fmt fmt_t;
int handle_print(const char *fmt, int *i, va_list list, char buffer[], int flags, int width, int precision, int size);
int _printf(const char *format, ...);

#endif

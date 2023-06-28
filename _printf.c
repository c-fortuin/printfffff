#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * _printf- function that produces output according to a format
 * @format: Format
 * Return: Printed characters
 */
int _printf(const char *format, ...)
{
	char p;
	int count = 0;

	va_list arg;
	va_start(arg, format);

	for (int i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			
			switch (format[i])
			{
				case 'c':
					c = va_arg(arg, int);
					_putchar(p);
					count++;
					break;
				case 's':
					char *str = va_arg(arg, char *);
					puts(str);
					count += strlen(str);
					break;
				case '%':
					_putchar('%');
					count++;
					break;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	va_end(arg);

	return count;
}

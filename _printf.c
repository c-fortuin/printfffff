#include "main.h"
/**
 * _printf- function that produces output according to a format
 * @format: Format
 * Return: Printed characters
 */
int _printf(const char *format, ...)
{
	const char *ptr;
	int count = 0;

	va_list arg;
	va_start(arg, format);

	for (ptr = format; *ptr != '\0'; ptr++)
	{
		if (*ptr == '%')
		{
			ptr++;
			if (*ptr == '\0')
				break;

			if (*ptr == '%')
			{
				_putchar(ch);
				count++;
			}
			else if (*ptr == 'c')
			{
				int ch = va_arg(arg, int);
				_putchar(ch);
				count++;
			}
			else if (*ptr == 's')
			{
				char *str = va_arg(arg, char *);
				while (*str != '\0')
				{
					_putchar(*str);
					count++;
					str++;
				}
			}
		}
		else
		{
			_putchar(*ptr);
			count++;
		}
	}
	va_end(arg);

	return count;
}

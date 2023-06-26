#include "main.h"
/**
 * _printf- function that produces output according to a format
 * @format: Format
 * Return: Printed characters
 */
int _printf(const char *format, ...)
{
	int count = 0;

	va_list arg;
	va_start(arg, format);

	while (*format != '\0')
	{
		if (*format == '&')
		{
			format++;

			switch (*format)
			{
				case 'c':
					_putchar(va_arg(arg, int));
					count++;
					break;

				case 's':
					count += printf("%s", va_arg(arg, char*));
					break;

				case '%':
					_putchar('%');
					count++;
					break;
				default:
					_putchar('%');
					_putchar(*format);
					count += 2;
					break;
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}

		format++;
	}

	va_end(arg);

	return count;
}

int main()
{
	_printf("Goodmorning, %s. Your name starts with a %c.\n", "Chrisli", 'C');
	return 0;
}

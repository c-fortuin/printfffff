#include "main.h"
/**
 * _printf- function that produces output according to a format
 * @format: Format
 * Return: Printed characters
 */
int _printf(const char *format, ...)
{
	int i;
	int printed = 0;
	int printed_char = 0;

	if (format == NULL)
		return (-1);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			printed_char++;
		else
		{
			if (printed == -1)
				return (-1);
			printed_char += printed;
		}
	}
	return (printed_char);
}

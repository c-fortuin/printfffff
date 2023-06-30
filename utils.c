#include "main.h"
/**
 * is_printable- Evaluates if a char is printable
 * @c: Character to be evaluated
 * Return: 1 if success, 0 otherwise
 */
int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return(1);

	return (0);
}
/**
 * append_hexa_code- Append code to buffer
 * @buffer: Array
 * @i: Index
 * @ascii_code: Assci Code
 * Return: 3
 */
int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";

	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}
/**
 * is_digit- Verifies if a char is a digit
 * @c: Character  to be evaluated
 * Return: 1 success 0 otherwise
 */
int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}
/**
 * convert_size_number- Casts a number to the specified size
 * @num: Number too be casted
 * @size: Number that indicates the type to be casted
 * Return: Casted value of num
 */
long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}
/**
 * convert_size_unsgnd- Number to a specified size
 * @num: Number to be casted
 * @size: Number indicates the type to be casted
 * Return: Casted value of a num
 */
long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (s == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}

#include <unistd.h>
/**
 * _putchar- writes character c to stdout
 * @c:: Characters to print
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

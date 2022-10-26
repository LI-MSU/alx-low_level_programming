#include "main.h"

/**
 * _puts - is a function that prints a string followed by a newline
 * @str: is a pointer
 */

void _puts(char *str)
{
	while (*str != '\0')
		_putchar(*(str++));
	_putchar('\n');
}

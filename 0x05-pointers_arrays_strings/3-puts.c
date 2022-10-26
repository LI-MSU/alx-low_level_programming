#include "main.h"

/**
 * _puts - is function that increments str in order to print it
 * @str: is a pointer
 */

void _puts(char *str)
{
	while (*str != '\0')
		_putchar(*(str++));
	_putchar('\n');
}

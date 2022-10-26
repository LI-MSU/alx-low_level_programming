#include "main.h"

/**
 * _puts - is a function that prints a string followed by a newline
 * @str: is a pointer
 */

void _puts(char *str)
{
	for ( ; *str != '\0'; *str++);
	{
		_putchar ('%s', str);
	}
	_putchar ('\n');
}

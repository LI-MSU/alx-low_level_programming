#include "main.h"

/**
 * _puts - is function that increments str in order to print it
 * @str: is a pointer
 */

void _puts(char *str)
{
	for (*str = 0 ; *str != '\0' ; str++)
		_putchar(*str);
	_putchar('\n');
}

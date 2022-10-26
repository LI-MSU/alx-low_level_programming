#include "main.h"

/**
  * _puts - Prints the string if it contains something +\0
  * @str: is a string
  * Return: void
  */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}

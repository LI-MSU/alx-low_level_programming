#include "main.h"

/**
 * _strlen - function that returns length of string.
 * @s: this is a pointer.
 * @i: this is a variable called to mimick value of *s
 * Return - will print the result
 */

int _strlen(char *s)
{
	int i = 0;
	while (*s++);
	i++;
	return (i);
}

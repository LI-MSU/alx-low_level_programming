#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - will print reversed string + \n
 * @b: a variable
 * @s: the pointer
 */

void print_rev(char *s)
{
	int b = 0;
	while (*(s + b) != '\0')
	{
		strrev(*s);
		putchar(*(s + b));
		b++;
	}
	putchar(10);
}

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
	int b = strlen(s);
	while (b--)
	putchar(*(s + b));
	putchar(10);
}

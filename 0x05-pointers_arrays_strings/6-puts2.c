#include <stdio.h>
#include "main.h"

/**
 * puts2 - show every other string element
 * @str: the string
 * @c: used to get result
 */

void puts2(char *str)
{
	int c = 0;
	while (*(str + c) != '\0')
	{
		if ( c % 2 == 0)
			putchar (*(str + c));
		c++;
	}
	putchar(10);
}

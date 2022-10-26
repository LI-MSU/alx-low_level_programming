#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverse strings will be produced
 * @t: is used to swap
 * @s: the string
 * @st: the second swap
 *
 */

void rev_string(char *s)
{
	char t;
	char *st = s;

	for (; *(s + 1); )
	{
		s++;
	}
	while (st < s)
	{
		t = *st;
		*st = *s;
		*s = t;
		s--;
		st++;
	}
}

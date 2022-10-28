#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * 
 */

char *_strncat(char *dest, char *src, int n)
{
	int len1, len2, i;

	len1 = strlen (dest);
	len2 = strlen (src);

	for (i = 0; i <= len2; i++)
	{
		dest[len1 + i] = src [n];
	}
	return (dest);
}

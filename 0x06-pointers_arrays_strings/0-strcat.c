#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *
 *
 */

char *_strcat(char *dest, char *src)
{
	int len1, len2, i;

	len1 = strlen(*dest);
	len2 = strlen(*src);

	for (i = 0; i <= len1; i++)
	{
		*dest[len1 + i] = *src [i];
	}

	return (*dest);

}

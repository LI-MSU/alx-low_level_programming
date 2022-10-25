#include "main.h"

/**
 * swap_int - will swap the two values.
 * @a: is a pointer in this function.
 * @b: is another pointer.
 * just: is one var used to swap.
 */

void swap_int(int *a, int *b)
{
	just = *a;
	*a = *b;
	*b = just;
}

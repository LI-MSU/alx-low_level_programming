#include "main.h"
/**
 * print_sign-> This will print the sign of the element.
 * @n: is just another character arg
 * With ifs and elses we can change tej world
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

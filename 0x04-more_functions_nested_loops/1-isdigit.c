#include "main"

/**
 * _isdigit - is  a function that prints either 1 or 0 depending on value of c
 * @c: is the thing
 * Return: 1 or 0 depending...
 */


int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}

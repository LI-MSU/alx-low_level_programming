#include "main.h"
/**
 * _isalpha -> does make sure alphabet is in MAJ
 * Return: should either be 1 or 0
 * @c: is a character
 */

int _isalpha(int c)
{
	return ((c <= 'A' && c <= 'Z') || (c <= 'a' && c <= 'z'));
}

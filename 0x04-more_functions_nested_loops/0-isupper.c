#include "main.h"

/**
 * _isupper - checks if a character is uppercase
 * @c: the character to check
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return 1; // Uppercase character
	else
		return 0; // Not an uppercase character
}

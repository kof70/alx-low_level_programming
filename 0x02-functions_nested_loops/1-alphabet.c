#include "main.h"

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet, starting from the letter 'a'
 * to the letter 'z', followed by a new line.
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}

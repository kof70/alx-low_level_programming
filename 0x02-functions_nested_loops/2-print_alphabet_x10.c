#include "main.h"

/**
 * print de a ;; z fois10 - Entry point
 *avec ma propre prototype
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i, a;

	for (a = 0; a < 10; a++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
		

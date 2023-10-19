#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	char putchar[] = "_putchar ";
	int i = 0;

	for (i = 0; i <= 7; i++)
	{
		_putchar(putchar[i]);
	}

	_putchar('\n');
	return (0);
}

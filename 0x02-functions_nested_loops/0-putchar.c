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

	while (putchar[i] != '\0')
	{
		_putchar(putchar[i]);
		i++;
	}

	_putchar('\n');
	return (0);
}

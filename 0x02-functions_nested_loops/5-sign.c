#include "main.h"

/**
 * print_sign - sign of number print
 * @n: a nuber to check the sign
 * Return: 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
	}
	return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar('0' + num);
	}
	putchar('\n');

	return (0);
}

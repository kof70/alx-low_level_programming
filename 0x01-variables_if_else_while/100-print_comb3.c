#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 8; num1++) /* Change the limit of num1*/
	{
		for (num2 = num1 + 1; num2 <= 9; num2++) /* Start num2 from num1 + 1*/
		{
			putchar(num1 + '0');
			putchar(num2 + '0');

			if (num1 != 8 || num2 != 9)
			{
				putchar(',');
				putchar(' ');/* Ajout d'un espace après la virgule*/
			}
		}
	}
	putchar('\n');

	return (0);
}

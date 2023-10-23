#include "main.h"

/**
 * times_table - la tables des 9 fois
 * @result,fois: les variables utulise
 * Return: void
 */
void times_table(void)
{
	int  result, i, j;

	for (i = 0;i<= 9; i++)
	{
		for(j = 0;j <= 9; j++)
		{
			result = i * j;
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (result < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + result);
				}
				else if (result >= 10 && result < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + result / 10);
					_putchar('0' + result % 10);
				}
				else
				{
					_putchar(',');
					_putchar('0' + result / 100);
					_putchar('0' + (result % 100) / 10);
					_putchar('0' + result % 10);
				}
			}
			else
			{
				_putchar('0' + result);
			}
		}
		_putchar('\n');
	}
}

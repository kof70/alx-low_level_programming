#include "main.h"
/**
*print_numbers-print 0 to 9 with  putchar
*
*Return: Success 1 -1 errno is set
*/
void print_numbers(void)
{
	int k;

	for (k = 48; k <= 57; k++)
	{
		_putchar(k);
	}
	_putchar('\n');
}

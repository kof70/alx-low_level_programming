#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter;/*letter la variables pour stocker chaque lettre de l alphabet et n importe quoi peut etre la variable*/

	for (letter = 'a'; letter <='z'; letter++)/*declaration des variables*/
	{
		putchar(letter);/*imprimez chq lettre*/
	}
	putchar('\n');/* pour la ligne a la fin */

	return 0;
}

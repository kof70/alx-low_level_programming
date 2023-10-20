#include "main.h"

/**
 * _islower - Entry point
 * pour verifier la lettre c pour voir si elle est minisule ou majuscule imprime 1 sinn et 0 si
 * Return: 0 always
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	else 
		return (0);

}

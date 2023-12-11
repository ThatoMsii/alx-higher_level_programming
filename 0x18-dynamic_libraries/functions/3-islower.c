#include "main.h"

/**
 *_islower - Checks if the input is a lowercase character.
 *
 *@c: The character to be checked.
 *
 *Return: 1 @c is lowercase, 0 for the rest.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

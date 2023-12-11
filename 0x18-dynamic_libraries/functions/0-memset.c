#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 *
 * @s: Starting address of memoryto be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for  for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

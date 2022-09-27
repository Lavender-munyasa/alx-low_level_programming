#include" main.h"

/**
 * _memset - fills a memory block with a constant byte
 * @s:pointer in memory
 * @b:character to be used
 * @n:number of bytes to be used
 * Return: a pointer to memory block
 */

char *_memset(char *s, char b, unsigned int n);
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
	}

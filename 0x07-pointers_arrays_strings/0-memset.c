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
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	retun(s);
}

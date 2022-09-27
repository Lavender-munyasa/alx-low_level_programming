#include "main.h"

/**
 * _strchr - locates a character in a string
 * @c: characterto check
 * @s: string to check
 *
 * Return: pointer to the first occurrence of
 * the character c in the string s, is NULL
 */

char *_strchr(char *s, char c);
{
	int i;

	for (i = 0; *(s + 1); i++)
	{
		if (*(s + 1) == c)
			return (s + 1);
	}
	if (*(s + 1) == c)
		return (s + 1);
	return (0);
}

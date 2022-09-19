#include <stdio.h>
#include <string.h>

/**
 * main- prints a string in reverse
 * return:always 0
 * @a:parameter
 */
void rev_string(char *s);
{
	char s[100];

	printf("Enter a string to reverse\n");
	gets(s);

	strrev(s);

	return (0);
}

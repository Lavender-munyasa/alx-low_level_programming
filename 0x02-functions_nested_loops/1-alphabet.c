#include <main.h>

/**
 * main - main code block
 *
 * Description - program that prints the alphabet in lower case
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('/n');
}		

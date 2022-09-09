#include <stdio.h>

/**
 * main - printing numbers from 0-9 with commas and space between them
 * Description: using the main function
 * this program prints all number combos
 * Return: 0
 */

int main(void)
{
	int c;
	for (c = 48; c <= 57; c++)
	{
		putchar(c);
		if (c != 57)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}


#include "main.h"

/**
 * print_rev - it prints the reverse of a string
 * @s: string to be reversed
 */

void print_rev(char *S)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}

	while (count > 0)
	{
		s--;
		_putchar(*s);
		count--;
	}
	_putchar('\n');

}

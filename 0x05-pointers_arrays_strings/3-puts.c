
#include "main.h"

/**
 * _puts - function
 * @str: string to be printed
 */

void _puts(*str)
{
	while (*str)
	{
		_putchar(*str++);
	}

	_putchar('\n');
}

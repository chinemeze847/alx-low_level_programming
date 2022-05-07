
#include "main.h"

/**
 * _strlen - finds the length of a string
 * @s: Input char
 * Return: length of the string
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}

	return (l);
}

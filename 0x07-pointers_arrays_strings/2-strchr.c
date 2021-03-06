#include "main.h"
#include <stdio.h>

/**
 * _strchr - Function that locates a character in a string.
 *
 * @s: Pointer to the null-terminated byte string to be analyzed
 * @c: Character to search for
 *
 * Return: A pointer to first occurence of c.
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	/* Loop through strings */
	for (; *(s + i) != '\0'; i++)
	{
		/*Check if character in s is in c */
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);

	return ('\0');
}

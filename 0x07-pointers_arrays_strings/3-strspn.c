#include "main.h"


/**
 * _strspn - Function that gets length of a prefix string.
 *
 * @s: Pointer to the null-terminated byte string to be analyzed
 * @accept: Pointer to the null-terminated byte string that contains characters
 *
 * Return: Number of bytes in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index] ; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}
			else if (accept[index + 1] == '\0')
			{
				return (bytes);
			}
		}

		s++;
	}

	return (bytes);
}

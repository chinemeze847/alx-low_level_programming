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
	unsigned int length, j;

	/* Loop through strings */
	for (length = 0; *(s + length) != '\0'; length++)
	{
		/* Loop through string accept */
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			/*Check where the first character in string j appears */
			/* in string c and immediately break out of the loop */
			if (*(s + length) == *(accept + j))
			{
				break;
			}
		}
                /* Check if there is no string accept to loop through */
		if (!*(accept + j))
			break;
	}
        /* Return the length where the first character appears */
	return (length);
}

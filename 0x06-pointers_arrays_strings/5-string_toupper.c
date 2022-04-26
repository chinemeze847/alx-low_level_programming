#include "main.h"

/**
 * string_toupper - Changes all lowercase letters to upper
 * @str: string to return.
 *
 * Return: String.
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}

	return (str);
}

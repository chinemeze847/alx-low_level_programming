#include "main.h"

/**
 * _isupper -checks for uppercase characters
 *
 * @c: Number to be checked
 *
 * Return: 1 (Success) or 0 (Failure)
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

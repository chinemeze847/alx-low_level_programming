#include "main.h"

/**
 * _memset - fills the first @n bytes of the memory area
 *
 * @s: Pointer to a memory
 * @b: Value that is to fill up memory area @s
 * @n: Number of bytes of memory area @s to be filled with @b
 *
 * Return: Pointer to the memory area @s
 */

char *_memset(char *s, charb, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the charater c to stdout
 * @c: The character to be written
 *
 * Return: 0n success 1
 * On error, -1 is returned, errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

#include <stdio.h>
#include <unistd.h>

/**
 * main - This is the entry point of my program
 *
 * Description: This prints a message to the standard error output
 *
 * Return: This returns 1
 *
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all aphabets in lowercase
 *
 * Return: returns 0
 *
 */

int main (void)
{
	char i;

	for(i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	putchar('\n');

	return (0);
}

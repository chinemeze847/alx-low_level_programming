#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: returns 0
 *
 */

int main(void)
{
	char i = 'a';
	int num;

	for (num = 0; num < 16 ; num++)
	{
		if (num < 10)
		{
			putchar(num + '0');
		}
		else
		{
			putchar(i);
			i++;
		}

	}
	putchar('\n');

	return (0);
}

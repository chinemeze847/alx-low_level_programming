#include <stdio.h>

/**
 * main - funtion
 *
 * @argc: Offset count
 * @argv: Offset value
 *
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

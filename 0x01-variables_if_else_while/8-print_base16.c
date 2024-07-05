#include <stdio.h>

/**
 * main - Entry point
 * Description: a program that prints all the
 * numbers of base 16 in lowercase, followed
 * by a new line.
 *
 * Return: always 0, on success
 *
 */

int main(void)
{
	int i;

	/* for digits 0 - 9 */
	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}
	/* for letters a - f */
	for (i = 0; i < 6; i++)
	{
		putchar('a' + i);
	}
	putchar('\n');

	return (0);
}

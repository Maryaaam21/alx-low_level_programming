#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints single
 * digit numbers of base 10, from 0
 * followed by a new line.
 *
 * Return: always 0, on success
 *
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
		putchar('\n');

		return (0);
}

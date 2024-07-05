#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints the alphabet in
 * lowercase, followed by a new line
 *
 * Return: always 0, on success
 *
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}
		putchar('\n');

		return (0);
}

#include "main.h"

/**
 * _puts_recursion - a function similar to puts
 * @s: the char to input
 * @*s: the string
 * Return: always 0 on success
 */

void _puts_recursion(char *s)

{
if (*s)
{
	_putchar(*s);
	_puts_recursion(s + 1);
}
else
{
	_putchar('\n');
}
}

#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: the char that represents a string
 * Return: the stirng length
 */

int _strlen_recursion(char *s)

{
	if (*s)
{
	return (1 + _strlen_recursion(s + 1));
}
	else
{
	return (0);
}
}

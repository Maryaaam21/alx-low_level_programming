#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of characters
 * @size: char to represent size of array
 * @c: char to represent filling the array
 * Return: the filled array
 */

char *create_array(unsigned int size, char c)

{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
{
	s[i] = c;
}
	return (s);
}

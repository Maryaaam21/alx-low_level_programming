#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc function.
 * @b: the number of bytes to allocate memory to.
 * Return: a pointer to the allocated memory.
 * If malloc fails, *malloc_checked should terminate
 * at status value = 98.
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
if (ptr == NULL)
	exit(98);
return (ptr);
}

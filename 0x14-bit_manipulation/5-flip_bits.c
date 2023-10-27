#include "main.h"

/**
 * flip_bits - counts the number of bits to flip
 * to get from one number to another
 * @n: the first number
 * @m: the second number
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	int a, count_bits = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

for (a = 63; a >= 0; a--)
{
	current = exclusive >> a;
if (current & 1)
	count_bits++;
}
	return (count_bits);
}

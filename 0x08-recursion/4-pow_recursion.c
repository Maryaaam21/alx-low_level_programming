#include "main.h"

/**
 * _pow_recursion - a function that returns thr value of x
 * raised to the power of y
 * @x: the char to be raised
 * @y: the char that is the power to raise x to
 * Return: the power of x to y
 */

int _pow_recursion(int x, int y)

{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x,y - 1));
}

#include "main.h"

/**
 *_pow_recursion - raise to power
 *@x: integer to raise
 *@y: raise to power of y
 *
 * Return: result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}

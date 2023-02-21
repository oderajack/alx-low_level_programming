#include "main.h"

/**
 * _abs - returns an absolute value of an int
 * @c: the int to be calculated
 * Return: Absolute of an int else 0
 */

int _abs(int c)
{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}

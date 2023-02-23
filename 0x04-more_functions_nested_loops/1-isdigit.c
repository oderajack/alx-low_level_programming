#include "main.h"

/**
 * _isdigit - function that checks for a digit
 * @x: The number to be checked
 * Return: 1 for a char that is a digit else 0
 */

int _isdigit(int x)

{
	if (x >= 48 && x <= 57)
	{
	return (1);
	}
	return (0);
}

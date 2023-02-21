#include "main.h"

/**
 * print_sign - prints sign
 * @n: int to be checked
 * Return: 1 for positive int, -1 for negative else 0 for anything else
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}

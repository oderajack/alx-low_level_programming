#include <stdio.h>

/**
 * swap_int - function that swaps the values of two ints
 * @a: First int to swap
 * @b: Second int to swap
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
/* the fn that swaps values of 2 ints */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

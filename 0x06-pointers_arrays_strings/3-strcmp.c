#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: A pointer to the first string to be compared
 * @s2: A pointer to the second stringto becompared
 * Return: if str1 < str2, the negativedifference of the first unmatchedchara
 * if str1 == str2, 0.
 * if str1 > str2, the positive difference of the first unmatched char
 *
 */

int _strcmp(char *s1, char *s2)

{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}

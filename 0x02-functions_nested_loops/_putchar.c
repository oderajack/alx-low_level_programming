#include <unistd.h>

/**
 * _putchar program
 * Return: 1
 * Error, return -1
 */

int _putchar(char c)
{
        return (write(1, &c, 1));
}

#include "main.h"

/**
 * _islower - checks the char if lowercase
 * @c: is the char
 * Return: 1 is true, 0 is not true.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

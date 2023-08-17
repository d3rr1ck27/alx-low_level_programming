#include "main.h"

/**
 * _isdigit - checks if the numbers recieved are 0 - 9
 * @c: char character to be checked
 * Return: 0 or 1
 *//

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

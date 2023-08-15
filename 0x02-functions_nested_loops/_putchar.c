#include "main.h"
#include <unistd.h>
/**
 * _putchar-writes the character, which is c to stdout
 * @c: the character to print
 *
 * Return:When sucess 1
 * When error, -1 returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

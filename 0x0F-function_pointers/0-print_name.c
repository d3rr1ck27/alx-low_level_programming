#include "function_pointers_h"
#include <stdio.h>
/**
 * print_name - print name using pointer
 * @name: string to add
 * @f: pointer to function
 * Return: null
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

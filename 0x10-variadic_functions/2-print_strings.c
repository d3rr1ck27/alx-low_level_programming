#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Prints strings, followed by a line
 * @seperator: The string to be printed between strings
 * @n: The number of strings passed to the function
 * @...: A variable number of strings to be printed
 * Description: If sperator is Null, not printed
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int index;

	va_start(strings, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != (n - 1) && seperator != NULL)
			printf("%s", seperator);
	}
	printf("\n");

	va_end(strings);
}

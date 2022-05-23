#include "main.h"
#include <stdarg.h>

/**
 * _print_str - prints strings to stdout
 *
 * @args: string to be printed
 * Return: string
 */

int _print_str(va_list args)
{
	int j;
	char *s = va_arg(args, char *);

	for (j = 0; s[j] != '\0'; j++)
	{
		_putchar(s[j]);
	}
	return (0);
}

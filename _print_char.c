#include "main.h"
#include <stdarg.h>

/**
 * _print_char - prints characters to stdout
 *
 * @c: character to be printed
 * Return: character
 */


int _print_char(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}

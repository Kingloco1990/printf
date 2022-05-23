#include "main.h"
#include <stdarg.h>
#include <limits.h>

/**
 * _print_int - prints integers to stdout
 *
 * @args: integer to be printed
 * Return: string
 */

int _print_int(va_list args)
{
	int n = va_arg(args, int);
	char last_digit;
	int reversed;

	if (n < 0)
	{
		_putchar('-');
		last_digit = (char)('0' - (n % 10));
		n /= -10;

	}
	else
	{
		last_digit = (char)((n % 10) + '0');
		n /= 10;
	}

	reversed = 0;
	while (n > 0)
	{
		reversed = reversed * 10 + (n % 10);
		n /= 10;
	}
	while (reversed > 0)
	{
		char c = (char)((reversed % 10) + '0');

		_putchar(c);
		reversed /= 10;
	}
	_putchar(last_digit);

	return (0);
}

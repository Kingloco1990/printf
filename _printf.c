#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * _printf - produces output according to a format
 *
 * @format: a character string
 * Return: integer
 */

int _printf(const char *format, ...)
{
	int i = 0, num_ch = 0, (*func)(va_list);
	va_list args;

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			num_ch++;
		}
		else
		{
			func = _select_func(format[i + 1]);
			if (func != NULL)
			{
				i++;
				func(args);
				num_ch++;
			}
		}
	}
	va_end(args);
	return (num_ch);
}

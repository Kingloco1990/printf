#include "main.h"
#include <stdio.h>

/**
 * _printf - produces output according to a format
 *
 * @format: a character string
 * Return: integer
 */

int _printf(const char *format, ...)
{
	int i = 0, j = 0, num_ch = 0;
	char *str = NULL;
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
			if (format[i + 1] == 'c')
			{
				i++;
				_putchar(va_arg(args, int));
				num_ch++;
			}
			else if (format[i + 1] == 's')
			{
				i++;
				str = va_arg(args, char *);
				for (j = 0; str[j] != '\0'; j++)
				{
					_putchar(str[j]);
					num_ch++;
				}
			}
			else if (format[i + 1] == '%')
			{
				i++;
				_putchar('%');
				num_ch++;
			}
		}
	}
	va_end(args);
	return (num_ch);
}

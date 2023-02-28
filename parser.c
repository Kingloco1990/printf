#include "main.h"

/**
 * parser - Receives the main string and all the necessary parameters to
 *          print a formated string.
 * @format: A string containing all the desired characters.
 * @p: A list of all the posible functions.
 * @arg: A list containing all the argumentents passed to the program.
 *
 * Return: Total number of characters printed.
 */
int parser(const char *format, printer p[], va_list arg)
{
	int i, j, r_val, printed_chars = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%') /* Checks for format specifiers */
		{
			/* Iterates through struct to find the right func */
			for (j = 0; p[j].symbol != NULL; j++)
			{
				if (format[i + 1] == p[j].symbol[0])
				{
					r_val = p[j].func(arg);
					if (r_val == -1)
						return (-1);
					printed_chars += r_val;
					break;
				}
			}
			if (format[i + 1] != ' ' && p[j].symbol == NULL)
			{
				if (format[i + 1] != '\0')
				{
					write(1, &format[i], 1);
					write(1, &format[i + 1], 1);
					printed_chars += 2;
				}
				else
					return (-1);
			}
			i = i + 1; /*Updating i to skip format symbols*/
		}
		else
		{
			write(1, &format[i], 1);
			printed_chars++;
		}
	}
	return (printed_chars);
}

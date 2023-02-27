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
void parser(const char *format, printer p[], va_list arg)
{
	int i, j;

	/* Iterates through the main str*/
	for (i = 0; format[i] != '\0'; i++)
	{
		/* Checks for format specifiers */
		if (format[i] == '%')
		{
			/* Iterates through struct to find the right func */
			for (j = 0; p[j].symbol != NULL; j++)
			{
				if (format[i + 1] == p[j].symbol[0])
				{
					p[j].func(arg);
					break;
				}
			}
		}
		else
		{
			/* call the _putchar function to print the first byte */
			/* of the format string */
			write(1, &format[i], 1);
		}
	}
}

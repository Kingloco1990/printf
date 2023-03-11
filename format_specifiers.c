#include "main.h"

/**
 * print_char - Prints a character.
 * @arg: A list of arguments to be printerd.
 *
 * Return: The number of characters printed.
 */
int print_char(va_list arg)
{
	char c = va_arg(arg, int);

	write(1, &c, 1);

	return (1);
}

/**
 * print_string - Prints a string.
 * @arg: A list of arguments to be printerd.
 *
 * Return: The number of characters printed.
 */
int print_string(va_list arg)
{
	int i = 0;
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
		str = "(null)";

	while (str[i] != '\0')
	{
		i++;
	}

	write(1, str, i);

	return (i);
}

/**
 * print_percent - Prints the percentage symbol.
 * @arg: A list of arguments to be printerd.
 *
 * Return: The number of characters printed.
 */
int print_percent(va_list arg __attribute__((unused)))
{
	char c = '%';

	write(1, &c, 1);

	return (1);
}

/**
 * print_Sstring - Prints characters not in Not in C99 or C11
 *                 as '\x'.
 * @arg: A list of arguments to be printerd.
 *
 * Return: The number of '\x' characters printed.
 */
int print_Sstring(va_list arg)
{
	int i = 0;
	char *str, *s;

	str = va_arg(arg, char *);
	s = "\\x";

	if (str == NULL)
		str = "(null)";

	if (str == s)
		return(write(1, s, 1));

	while (str[i] != '\0')
	{
		if ((str[i] < 0 && str[i] < 32) || str[i] >= 127)
		{
			write(1, s, 1);
			i++;
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}

	return (i);
}

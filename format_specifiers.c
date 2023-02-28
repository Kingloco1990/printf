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

	return (write(1, &c, 1));
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

	return (write(1, str, i));
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

	return (write(1, &c, 1));
}

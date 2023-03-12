#include "main.h"

/**
 * print_reversed - Reverses and prints a string.
 * @arg: List of arguments passed to the function.
 *
 * Return: The number of characters printed.
 */
int print_reversed(va_list arg)
{
	int i = 0, len = 0;
	char *str, *p;

	str = va_arg(arg, char *);

	while (str[len] != '\0')
		len++;

	p = malloc(sizeof(char) * len + 1);

	p = rev_string(str);
	if (p == NULL)
		return (-1);

	if (p == NULL)
		return (-1);

	while (p[i] != '\0')
	{
		write(1, &p[i], 1);
		i++;
	}

	free(p);

	return (len);
}

/**
 * rot13 - Converts string to rot13.
 * @arg: List of arguments passed to the function.
 *
 * Return: Converted string.
 */
int rot13(va_list arg)
{
	int i, j, len = 0;
	char *str, *s;
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(arg, char *);

	if (str == NULL)
		return (-1);

	while (str[len] != '\0')
		len++;

	s = malloc(sizeof(char) * len + 1);
	if (s == NULL)
		return (-1);

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == alphabet[j])
			{
				s[i] = rot13[j];
				break;
			}
			else
				s[i] = str[i];
		}
	}

	write(1, s, len);

	free(s);

	return (len);
}

























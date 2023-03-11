#include "main.h"

/**
 * print_binary - Converts and prints a number from decimal to binary.
 * @arg: List of arguments passed to this function
 * Return: The length of the number printed
 */
int print_binary(va_list arg)
{
	int i, len;
	char *str, *rev_str, c;
	unsigned int num;

	num = va_arg(arg, unsigned int);

	if (num == 0)
	{
		c = '0';
		return (write(1, &c, 1));
	}

	if (num < 1)
		return (-1);

	len = base_len(num, 2);

	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (-1);

	for (i = 0; num > 0; i++)
	{
		if (num % 2 == 0)
			str[i] = '0';
		else
			str[i] = '1';
		num = num / 2;
	}
	str[i] = '\0';
	rev_str = rev_string(str);
	if (rev_str == NULL)
		return (-1);
	write_base(rev_str);
	free(str);
	free(rev_str);
	return (len);
}

/**
 * print_octal - Converts and prints a number from decimal to octal.
 * @arg: List of all the arguments passed to the program.
 *
 * Return: The number of characters printed.
 */
int print_octal(va_list arg)
{
	int len, i;
	char *str, *rev_str, ch;
	unsigned int num;

	num = va_arg(arg, unsigned int);

	if (num == 0)
	{
		ch = '0';
		return (write(1, &ch, 1));
	}
	if (num < 1)
		return (-1);

	len = base_len(num, 8);

	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (-1);

	for (i = 0; num > 0; i++)
	{
		str[i] = (num % 8) + '0';
		num = num / 8;
	}

	str[i] = '\0';
	rev_str = rev_string(str);
	if (rev_str == NULL)
		return (-1);

	write_base(rev_str);
	free(str);
	free(rev_str);
	return (len);
}

/**
 * print_hex - Converts and prints decimal to lowercase hexadecimal.
 * @arg: List of all the arguments passed to the program.
 *
 * Return: The number of characters printed.
 */
int print_hex(va_list arg)
{
	int len, i, result;
	char *str, *rev_str, ch;
	unsigned int num;

	num = va_arg(arg, unsigned int);

	if (num == 0)
	{
		ch = '0';
		return (write(1, &ch, 1));
	}

	len = base_len(num, 16);

	str = malloc(sizeof(char) * len + 1);

	if (str == NULL)
		return (-1);

	for (i = 0; num > 0; i++)
	{
		result = num % 16;

		if (result > 9)
		{
			result = hex_check(result, 'x');
			str[i] = result;
		}
		else
			str[i] = result + '0';

		num = num / 16;
	}

	str[i] = '\0';
	rev_str = rev_string(str);
	if (rev_str == NULL)
		return (-1);

	write_base(rev_str);
	free(str);
	free(rev_str);
	return (len);
}

/**
 * print_heX - Converts and prints decimal to uppercase hexadecimal.
 * @arg: List of all the arguments passed to the program.
 *
 * Return: The number of characters printed.
 */
int print_heX(va_list arg)
{
	int len, i, result;
	char *str, *rev_str, ch;
	unsigned int num;

	num = va_arg(arg, unsigned int);

	if (num == 0)
	{
		ch = '0';
		return (write(1, &ch, 1));
	}

	len = base_len(num, 16);

	str = malloc(sizeof(char) * len + 1);

	if (str == NULL)
		return (-1);

	for (i = 0; num > 0; i++)
	{
		result = num % 16;

		if (result > 9)
		{
			result = hex_check(result, 'X');
			str[i] = result;
		}
		else
			str[i] = result + '0';

		num = num / 16;
	}

	str[i] = '\0';
	rev_str = rev_string(str);
	if (rev_str == NULL)
		return (-1);

	write_base(rev_str);
	free(str);
	free(rev_str);
	return (len);
}

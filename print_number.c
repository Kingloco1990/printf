#include "main.h"

/**
 * print_integer - Prints a number send to this function.
 * @arg: List of arguments.
 *
 * Return: The number of integers printed.
 */
int print_integer(va_list arg)
{
	int i = 1, k = 1, n, len = 0, result;
	unsigned int num;
	char c = '-';

	n  = va_arg(arg, int);

	if (n < 0)
	{
		len += write(1, &c, 1);
		num = n * -1;
	}
	else
		num = n;

	while ((num / i) > 9)
		i *= 10;

	while (i)
	{
		result = (((num / i) % 10) + '0');
		len += write(1, &result, 1);
		i /= 10;
		k *= 10;
	}

	return (len);
}
/**
 * print_unsgined_integer - Prints an unsigned number
 * @num: Unsigned integer to be printed
 *
 * Return: The number of unsigned integers printed
 */
int print_unsigined_integer(va_list arg)
{
	int i = 1, k = 1, len = 0, result;
	unsigned int num;

	num = va_arg(arg, unsigned int);

	while ((num / i) > 9)
		i *= 10;

	while (i)
	{
		result = (((num / i) % 10) + '0');
		len += write(1, &result, 1);
		i /= 10;
		k *= 10;
	}

	return (len);
}

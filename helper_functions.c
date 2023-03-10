#include "main.h"

/**
 * _memcpy - Copies a memory area.
 * @dest: Destination for copied string.
 * @src: Source sting to be copied.
 * @n: The number of bytes to copy.
 *
 * Return: A  pointer to @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}

/**
 * rev_string - Reverses a string.
 * @s: String to reverse.
 *
 * Return: A pointer to a character.
 */
char *rev_string(char *s)
{
	int len = 0, i;
	char *dest, c;

	while (s[len] != '\0')
		len++;

	dest = malloc(sizeof(char) * len + 1);

	if (dest == NULL)
		return (NULL);

	_memcpy(dest, s, len);

	for (i = 0; i < (len / 2); i++)
	{
		c = dest[i];
		dest[i] = dest[len - 1 - i];
		dest[len - 1 - i] = c;
	}

	return (dest);
}

/**
 * base_len - Computes the length for a base number.
 * @num: The base number whose lenght is to be computed.
 * @base: The base.
 *
 * Return:The lenght of the base number.
 */
unsigned int base_len(unsigned int num, int base)
{
	unsigned int i;

	for (i = 0; num > 0; i++)
	{
		num = num / base;
	}

	return (i);
}

/**
 * write_base - sends characters to be written on standard output
 * @str: String to parse
 *
 * Return: Nothing.
 */
void write_base(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		write(1, &str[i], 1);
}

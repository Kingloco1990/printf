#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 *
 * @c: The character to print
 * Return: O on success and -1 when an error is encountered
 * and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

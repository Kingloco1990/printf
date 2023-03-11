#include "main.h"

/**
 * _printf - Produces output according to a format.
 * @format: Pointer to a string.
 *
 * Return: The number of characters printed (excluding
 *         the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
	int printed_chars;
	printer p[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{"b", print_binary},
		{"u", print_unsigned_integer},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_heX},
		{"S", print_Sstring},
		{NULL, NULL}
	};
	va_list arg;

	va_start(arg, format);

	if (format == NULL)
		return (-1);

	printed_chars = parser(format, p, arg);

	va_end(arg);

	return (printed_chars);
}

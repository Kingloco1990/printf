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
        printer p[] = {
                {"c", print_char},
                {"s", print_string},
                {"%", print_percent},
                {NULL, NULL}
        };
        va_list arg;

        va_start(arg, format);

        if (format == NULL)
                return (-1);

        parser(format, p, arg);

        va_end(arg);

        return (0);
}

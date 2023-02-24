#include "main.h"

/**
 * print_char - Prints a character.
 * @arg: A list of arguments to be printerd.
 *
 * Return: The number of characters printed.
 */
void print_char(va_list arg)
{
        _putchar(va_arg(arg, int));
}

/**
 * print_string - Prints a string.
 * @arg: A list of arguments to be printerd.
 *
 * Return: The number of characters printed.
 */
void print_string(va_list arg)
{
        int i = 0;
        char *str;

        str = va_arg(arg, char *);

        if (str == NULL)
                str = "(null)";

        while (*str != '\0')
        {
                _putchar(*str);
                str++;
                i++;
        }
}

/**
 * print_percent - Prints the percentage symbol.
 * @arg: A list of arguments to be printerd.
 *
 * Return: The number of characters printed.
 */
void print_percent(va_list arg __attribute__((unused)))
{
        _putchar('%');
}

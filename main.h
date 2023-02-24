#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdlib.h>

/**
 * struct Printer - defines a structure for symbols and functions
 * @symbol: The character to look up.
 * @func: The associated function.
 */
typedef struct Printer
{
        char *symbol;
        void (*func)(va_list);
} printer;

int _putchar(char c);
int _printf(const char *format, ...);
void parser(const char *format, printer p[], va_list arg);
void print_char(va_list);
void print_string(va_list);
void print_percent(va_list);

#endif /* #ifndef _MAIN_H_ */

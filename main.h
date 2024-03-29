#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct Printer - defines a structure for symbols and functions.
 * @symbol: The character to look up.
 * @func: The associated function.
 */
typedef struct Printer
{
	char *symbol;
	int (*func)(va_list);
} printer;

int _printf(const char *format, ...);
int parser(const char *format, printer p[], va_list arg);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_integer(va_list);
int print_binary(va_list);
int print_unsigned_integer(va_list);
int print_octal(va_list);
int print_hex(va_list);
int print_heX(va_list);
int print_Sstring(va_list);
int print_reversed(va_list);
int rot13(va_list);
int print_vpointer(va_list);

/*Helper functions*/
char *_memcpy(char *dest, char *src, unsigned int n);
char *rev_string(char *);
unsigned int base_len(unsigned int, int);
void write_base(char *str);
int hex_check(int num, char x);

#endif /* #ifndef _MAIN_H_ */

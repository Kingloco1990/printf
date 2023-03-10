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


/*Helper functions*/
char *_memcpy(char *dest, char *src, unsigned int n);
char *rev_string(char *);
unsigned int base_len(unsigned int, int);
void write_base(char *str);

#endif /* #ifndef _MAIN_H_ */

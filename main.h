#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
/**
 * struct print - structure for printing various types
 * @t: type to print
 * @f: function to print
 */
typedef struct print
{
	char *t;
	int (*f)(va_list);
} print_t;

int _putchar(char c);
int _printf(const char *format, ...);

/* Funtions to handle numbers */
int print_num(va_list num);
int print_bin(va_list num);
int print_un(va_list u);
int print_oct(va_list o);

/* Funtions to handle chars and strings */
int print_char(va_list c);
int print_str(va_list s);
int print_x(va_list x);
int print_X(va_list X);
int print_ptr(va_list arg);
int print_S(va_list S);

/*Funtions to handle string in reverse*/
int print_rev(va_list string);

/*Funtions to handle string in rot 13 enrtyption*/
int print_ROT(va_list string);

#endif

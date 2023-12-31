#ifndef MAIN_H
#define MAIN_H
#define _NULL NULL


#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *s);


int print_integers(int the_num);
int print_mem_address(void *the_ptr);
int print_str_reverse(char *strings);
int print_str(va_list argz);
int print_unsigned_bases(unsigned int n, int base_num);
int print_unsigned_caps(unsigned int n, int base_num);

char *binar(va_list list);
char *_intst(int div, int length, int n);
char *print_d(va_list list);

#endif /* Maryam Hassan and Hannah Sado */

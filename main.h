#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

/**
 *Specificateur_Format - Structure of Specificateur
 *@c: The char associated to the right function
 *@f: The function associated to the char
 */
typedef struct Specificateur_Format
{
    char c;
    void (*f)(va_list);
} specif;

int _printf(const char *format, ...);
void print_char(va_list);
void print_string(va_list);
void print_percent(va_list);
#endif

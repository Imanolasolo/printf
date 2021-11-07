#ifndef MAIN_H
#define MAIN_H

#include<stdarg.h>
/**
 * struct print - structure for printing various types
 * @t: type to print
 * @f: function to print
 */
typedef struct print
{
    /* data */
char *t;
int (*f)(va_list);
} print_t;

/* functions to use */
int _putchar(char c);
int _printf(const char *format, ...);

endif /* MAIN_H */

#ifndef MAIN_H         /* Condition if exit a MAIN_H file it don't continue */
#define MAIN_H         /* Define MAIN_H */
#include <sdtio.h>     /* Defines libreries standar for programs */
#include <stdlib.h>
#include <stdarg.h>    /* Define stdargh library */
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
/* List of functions*/
int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list c);
int print_s(va_list s);
int print_i(va_list i);
int print_d(va_list d);
int print_u(va_list u);
int print_b(va_list b);
int print_o(va_list o);
int print_x(va_list x);
int print_X(va_list X);
int print_p(va_list p);
int print_S(va_list S);
int print_r(va_list r);
int print_R(va_list R);
#endif                  /* End the conditional */

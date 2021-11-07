#ifndef MAIN_H
#define MAIN_H
#define <starg.h>
#define <stdio.h>
#define <stdlib.h>
typedef struct print
{
	char *t;
	int(*f)(va_list);
}print_t;
int _putchar(char c);
int _printf(const char *format, ...);
#endif

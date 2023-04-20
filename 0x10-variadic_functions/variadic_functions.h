#ifndef VARIAFUNC
#define VARIAFUNC

#include <stdarg.h>
#include <stdio.h>

typedef struct typeprint
{
	char *type_p;
	void (*function)(va_list);
} typeprint_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);


#endif

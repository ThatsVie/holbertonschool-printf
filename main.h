#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
/**
 * struct PrintFunction - structure to store format specifer
 * and associated function
 * @specifier: format specifier
 * @function: a pointer to the corresponding printing function
 */

typedef struct PrintFunction
{
	char *specifier;
	int (*function)(va_list);

} PrintFunction;

int _printf(const char *format, ...);
int _printChar(va_list args);
int _printString(va_list args);
int _printInt(va_list args);
int _printPercent(va_list args);
int _putchar(char c);
char *itoa(int num, char *str, int base;

#endif

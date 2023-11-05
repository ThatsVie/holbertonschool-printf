#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
/**
 * _printf - function that produces output
 * @format: format string
 *
 * Return: number of characters printed, or -1 for error
 */

int _printf(const char *format, ...)
{
	PrintFunction specifiers[] = {
		{"c", _printChar},
		{"s", _printString},
		{"d", _printInt},
		{"i", _printInt},
		{"%", _printPercent},
		{NULL, NULL}
	};
	va_list values;
	int count = 0;
	int specifier_index;

	if (!format)
		return (-1);

	va_start(values, format);

	while (*format)
	{
		if (*format != '%')
		{
			count += _putchar(*format);
		}
		else
		{
			format++;
			specifier_index = find_specifier(format);
			if (specifier_index >= 0)
			{
				count += specifiers[specifier_index].function(values);
				format++;
			}
			else
			{
				count += _putchar('%');
			}
		}
		format ++;
	}

	va_end(values);
	return (count);
}




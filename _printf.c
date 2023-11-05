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
	va_list args;
	int count = 0;
	int a, b = 0;

	if (!format)
		return (-1);

	va_start(args, format);
	for (a = 0; format[a] != '\0'; a++)
	{
		if (format[a] != '%')
			count += _putchar(format[a]);
		else
		{
			for (b = 0; b < sizeof; b++)
			{
				if (*specifiers[b].t == format[a + 1])
				{
					format++;
					count += specifiers[b].f(args);
					break;
				}
			}
			if (b == sizeof && format[a + 1] == '\0')
				return (-1);
			else if (b == sizeof && format[a + 1] != '\0')
				count += _putchar(format[a];
		}
	}
	va_end(args);
	return (count);
}
	

#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * _printf - takes a variable number of arguments
 *
 * @format: pointer to a format string
 *
 * Return: value of char_count (numbers of characters
 * printed)
 */

int _printf(const char *format, ...)
{
	int char_count = 0;
	va_list args;

	if (format == NULL)
	{
		return (-1);
	}

	va_start(args, format);

	while (*format)
	{
		if (*format != '%')
		{
			putchar(*format);
			char_count++;
		}
		else
		{
			char_count += print_percent(&char_count, format);
			handle_format(&char_count, &format, args);
		}
		format++;
	}
	va_end(args);
	return (char_count);
}

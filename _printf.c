#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * _printf - function that produces output according to format
 *
 * @format: format specifier
 *
 * Return: counter
 */
int _printf(const char *format, ...)
{
	int char_count = 0;

	va_list args;
	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;

			if (*format == '%')
			{
				putchar('%');
				char_count++;
			}
			if (*format == 'c')
			{
				int c = va_arg(args, int);

				putchar(c);
				char_count++;
			}
			else if (*format == 's')
			{
				const char *s = va_arg(args, const char *);

				while (*s != '\0')
				{
					putchar(*s);
					s++;
					char_count++;
				}
			}
			else
			{
				putchar('%');
				putchar(*format);
				char_count += 2;
			}
		}
		else
		{
			putchar(*format);
			char_count++;
		}

		format++;
	}
	va_end(args);

	return (char_count);
}

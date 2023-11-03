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
	
	if (format == NULL)
		return (-1);
	
	while (*format)
	{
		if (*format != '%')
		{
			putchar(*format);
			char_count++;
		}
		else
		{
			format++;

			if (*format == 'c')
			{
				int c = va_arg(args, int);

				putchar(c);
				char_count++;
			}
			else if (*format == 's')
			{
				const char *str = va_arg(args, const char *);

				while (*str)
				{
					putchar(*str);
					char_count++;
					str++;
				}
			}
			else if (*format == '%')
			{
				putchar('%');
				char_count++;
			}
			else
			{
				putchar(' ');
				char_counter++;
			}
		}

		format++;
	}
	va_end(args);

	return (char_count);
}

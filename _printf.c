#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * _printf - function that produces output according to format
 *
 * @format: format specifier
 *
 * Return:
 */

int _printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);

	int char_count = 0;


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
				char ch = va_arg(args, int);
				putchar(ch);
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
			else if (*format == 'd' || *format == 'i')
			{
				int num = va_arg(args, int);

				if (num < 0)
				{
					putchar('-');
					char_count++;
					num = -num;
				}

				int temp = num;
				int digits = 0;
				do
				{
				temp /= 10;
				digits++;
				}
				while (temp);

				temp = num;
				while (digits > 0)
				{
					int divisor = 1;
					for (int i = 1; i < digits; i++)
					{
					divisor *= 10;
					}
					int digit = temp / divisor;
					temp %= divisor;
					putchar('0' + digit);
					char_count++;
					digits--;
				}
			}
			else if (*format == '%')
			{
				putchar ('%');
				char_count++;
			}
			else
			{
				putchar('%');
				putchar(*format);
				char_count += 2;
			}
		}
		format++;
	}

	va_end(args);
	return (char_count);
}

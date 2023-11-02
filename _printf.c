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
	int num;
	char ch;
	const char *str;
	int temp;
	int digits;
	int divisor;


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
				ch = va_arg(args, int);
				putchar(ch);
				char_count++;
			}
			else if (*format == 's')
			{
			str = va_arg(args, const char *);
			while (*str)
				{
					putchar(*str);
					char_count++;
					str++;
				}
			}
			else if (*format == 'd' || *format == 'i')
			{
				num = va_arg(args, int);

				if (num < 0)
				{
					putchar('-');
					char_count++;
					num = -num;
				}

				temp = num;
				digits = 0;
				do
				{
				temp /= 10;
				digits++;
				}
				while (temp);

				temp = num;
				divisor = 1;
				for (temp = digits - 1; temp > 0; temp--)
					divisor *= 10;
			}
			while (digits > 0)
			{
				digits = num / divisor;
				num %= divisor;
				putchar('0' + digit);
				char_count++;
				digits--;
				divisor = 1;
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

#include "main.h"
#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
	int char_count = 0;
	va_list args;

	if (format == NULL)
	{
		return (-1);
	}

	va_start(args, format);

	while(*format)
	{
		if (*format != '%')
		{
			putchar(*format);
			char_count++;
		}
		else
		{
			handle_format(&char_count, &format, args);
		}
		format++;
	}
	va_end(args);
	return (char_count);
}

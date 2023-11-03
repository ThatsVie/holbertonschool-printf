#include <stdarg.h>
#include <stdio.H>
#include "main.h"

int _printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);

	int counter;
	
	while (format != '\0')
	{
		if (format != '%')
		{	
		
			if (format == 'c')
			{
				putchar('c')
			}
			else if (format == 's')
			{
				putchar('s');
			}
			else if (format == '%')
			{
				putchar('%');
			}
		}
		else
		{
			putchar(*format);
			counter++;
		}

		format++;
	}

	va_end(args);

	return (counter);
}

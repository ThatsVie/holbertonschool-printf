#include <stdio.h>
#include "main.h"

void format_char(int *char_count, va_list args)
{
	putchar(va_arg(args,int));
	(*char_count)++;
}

void format_string(int *char_count, va_list args)
{
	const char *str = va_arg(args, const char *);
	if (str == NULL)
	{
		const char *null_str = "(null)";
		while (*null_str)
		{
			putchar(*null_str);
			(*char_count)++;
			null_str++;
		}
	}
	else
	{
		while (*str)
		{
			putchar(*str);
			(*char_count)++;
			str++;
		}
	}
}
void format_int(int *char_count, va_list args)
{
	print_int(char_count, va_arg(args, int));
}

void format_percent(int *char_count)
{
	putchar ('%');
	(*char_count)++;
}

void handle_format(int *char_count, const char **format, va_list args)	
{
	(*format)++;
	if (**format == 'c') format_char(char_count, args);
	else if (**format == 's') format_string(char_count,args);
	else if (**format == 'd' || **format == 'i') format_int(char_count,args);
	else if (**format == '%') format_percent(char_count);
	else
	{
		putchar('%'), putchar(**format), *char_count += 2;
	}
}

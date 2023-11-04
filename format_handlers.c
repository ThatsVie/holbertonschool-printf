#include <stdio.h>
#include "main.h"
/**
 * format_char - formats and prints a single character
 *
 * @char_count: a pointer to an integer that keeps track
 * of the number of characters printed.
 * @args: a variable argument list that allows the function
 * to accept variable arguments
 */
void format_char(int *char_count, va_list args)
{
	putchar(va_arg(args, int));
	(*char_count)++;
}
/**
 * format_string - formats and prints a string
 *
 * @char_count: a pointer to an integer that keeps
 * track of the number of characters printed
 * @args: allows the function to accept variable arguments
 */
void format_string(int *char_count, va_list args)
{
	const char *str = va_arg(args, const char *);

	if (str == NULL)
	{
		str = "(null)";
	}

	while (*str)
	{
		putchar(*str);
		(*char_count)++;
		str++;
	}
}
/**
 * format_int - formats and prints an integer
 *
 * @char_count: a pointer to an integer that keeps
 * track of the number of characters printed
 * @args: a variable argument list that allows the
 * function to accept variable arguments
 */
void format_int(int *char_count, va_list args)
{
	int num = va_arg(args, int);

	print_int(char_count, num);
}
/**
 * print_percent - handles '%'and double %
 *
 * @char_count: pointer to integer that keeps track of 
 * number of characters printed
 * @format: pointer to current position of format string
 * Return: 1 if % or %% is encountered
 */
int print_percent(int *char_count, const char *format)
{
	int count = 0;
	int i;

	while (*format == '%')
	{
		count++;
		format++;
	}

	for (i = 0; i < count / 2; i++)
	{
		putchar('%');
		(*char_count)++;
	}

	return (count % 2);
}


/**
 * handle_format - handles different format specifiers
 * in a format string
 *
 * @char_count: a pointer to an integer that keeps track
 * of the number of characters printed
 * @format: a pointer to a pointer to a format string
 * @args: allows the function to accept variable arguments
 */
void handle_format(int *char_count, const char **format, va_list args)
{
	(*format)++;

	if (**format == 'c')
		format_char(char_count, args);
	else if (**format == 's')
		format_string(char_count, args);
	else if (**format == 'd' || **format == 'i')
		format_int(char_count, args);
	else if (**format == '%')
	{
		print_percent(char_count, *format);
	}
	else
	{
		putchar('%');
		putchar(**format);
		*char_count += 2;
	}
}

#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - function that produces output
 * @format: format string
 *
 * Return: number of characters printed, or -1 for error
 */
int _printf(const char *format, ...)
{	
	/*Array of print function specifiers*/
	PrintFunction specifiers[] = {
		{"c", _printChar},
		{"s", _printString},
		{"d", _printInt},
		{"i", _printInt},
		{"%", _printPercent},
		{NULL, NULL}
	};
	va_list args;/*Variable argument list*/
	int count = 0;/*Counter for number of characters printed*/
	int a, b = 0;/*Loop counters*/

	if (!format)
		return (-1);/*Return -1 if the format string is empty*/

	va_start(args, format);/*Start processing variable arguments*/
	for (a = 0; format[a] != '\0'; a++)
	{
		if (format[a] != '%')/*If the character is not a format specifier*/
			count += _putchar(format[a]);/*Print the character*/
		else
		{
			for (b = 0; b < 5; b++)
			{
				if (*specifiers[b].specifier == format[a + 1])/*Check if the format specifier matches*/
				{
					format++;
					count += specifiers[b].function(args);/*Call the corresponding print function*/
					break;
				}
			}
			if (b == 5 && format[a + 1] == '\0')
				return (-1);/*Return -1 if the format specifier is not found and there are no more characters*/
			else if (b == 5 && format[a + 1] != '\0')
				count += _putchar(format[a]);/*Print the '%' character if the format specifier is not found*/
		}
	}
	va_end(args);/*End processing variable arguments*/
	return (count);/*Return the total number of characters printed*/
}

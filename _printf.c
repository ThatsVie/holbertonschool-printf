#include "main.h"
#include <stdio.h>
#include <stdarg.h>

void print_buffer(char buffer[], int *buff_ind);

/**
 * _printf - prints formatted data to standard output
 *
 * @format: format string
 * @...: variable arguments based on format specifiers
 *
 * Return: value of char_count (numbers of characters
 * printed)
 */
int _printf(const char *format, ...)
{
	/* Declaring varibles*/
	int i, printed = 0, char_count = 0;
	int flags, width, precision, size, buff_ind = 0;
	va_list list;
	char buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);

	va_start(list, format); /*starts the variable argument list*/

	for (i = 0; format && format[i] != '\0'; i++) /*Starts to iterate over each char*/
	{
		if (format[i] != '%')
		{
		/*If the current char isn't % it adds it to buffer array and increments by 1*/
			buffer[buff_ind++] = format[i];
			/**
			 * checks if buffer index has reached buff size if so
			 * it prints contents and sets to 0 and tracks chars printed
			 */
			if (buff_ind == BUFF_SIZE)
				print_buffer(buffer, &buff_ind);
			char_count++;
		}
		else
		{
			print_buffer(buffer, &buff_ind);/*print contents of buffer*/
			flags = get_flags(format, &i);/*gets flags from format str and i*/
			width = get_width(format, &i, list);/*gets width from str and i*/
			precision = get_precision(format, &i, list);/*gets precision from str*/
			size = get_size(format, &i);/*gets size from str and pointer*/
			++i;
			/*prints the stored num of chars*/
			printed = handle_print(format, &i, list, buffer,
				flags, width, precision, size);
			if (printed == -1)
				return (-1);
			char_count += printed; /*tracks total number of char printed*/
		}
	}

	print_buffer(buffer, &buff_ind); /*print contents of buffer array if not empty and set 0*/

	va_end(list);

	return (char_count);
}

/**
 * print_buffer - Prints the contents of the buffer if it exist
 * @buffer: Array of chars
 * @buff_ind: Index at which to add next char, represents the length.
 */
void print_buffer(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
		write(1, &buffer[0], *buff_ind);

	*buff_ind = 0;
}


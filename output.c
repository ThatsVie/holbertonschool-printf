#include <stdio.h>
#include "main.h"
/**
 * print_int - formats and prints and integer
 *
 * @values: va_list containing integer to be printed
 *
 * Return: number of characters written
 */
int print_int (va_list values)
{
	int num = va_arg(values, int);
	int count = 0;
	char buffer[12];

	count += sprintf(buffer, "%d", num);
	write(1, buffer, count);
	return (count);
}

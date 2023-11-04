#include <stdio.h>
#include <unistd.h>
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
	int divisor = 1;
	int digits = 0;
	int temp = num;
	int current_digit;
	char buffer [20];
	int char_count = 0;
	int i;

	if (num < 0)
	{
		buffer[char_count++] = '-';
		num = -num;
	}

	do

	{
		temp /= 10;
		digits++;
	}
	while (temp);

	for (i = digits - 1; i >= 0; i--)
	{
		current_digit = num / divisor;
		buffer[char_count++] = current_digit + '0';
		num %= divisor;
		divisor /= 10;
	}

	buffer[char_count] = '\0';

	write(1, buffer, char_count);

	return (char_count);
}

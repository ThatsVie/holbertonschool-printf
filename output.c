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
	int divisor = 1;
	int digits = 0;
	int temp = num;
	int current_digit;
	int i;
	char buffer[20];

	if (num < 0)
	{
		putchar('-');
		(*char_count)++;
		num = -num;
	}
	
	do
	{
		temp /= 10;
		digits++;
	}
	while (temp);

	for (i = digits -1; i >= 0; i--)
	{
		divisor *= 10;
	}
	while (digits > 0)
	{
		current_digit = num / divisor;
		num %= divisor;
		buffer[digits - 1] = current_digit + '0';
		(*char_count)++;
		digits--;
		divisor = 1;
	}
	buffer[i] = '\0';
	write(1, buffer, i);
}

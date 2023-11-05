#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_int - formats and prints and integer
 *
 * @char_count: pointerto integer that keeps track of
 * number of characters printed
 * @num: interger value to be formatted and printed
 */

void print_int (int *char_count, int num)
{
	int divisor = 1;
	int digits = 0;
	int temp = num;
	int current_digit;
	int i;

	if (num < 0)
	{
		putchar('-');
		(*char_count)++;
		num = -num;
	}
	do {
		temp /= 10;
		digits++;
	}

	while (temp);

	for (i = digits - 1; i >= 0; i--)
	{
		divisor *= 10;
	}
	while (digits > 0)
	{
		current_digit = num / divisor;
		num %= divisor;
		putchar('0' + current_digit);
		(*char_count)++;			  
		digits--;
		divisor = 1;
	}
}

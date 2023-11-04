#include <stdio.h>
#include "main.h"
/**
 * print_int - formats and prints and integer
 *
 * @char_count: a pointer to an integer that
 * keeps track of the number of characters printed
 * @num: the integer value to be formatted and printed
 */
void print_int(int *char_count, int num)
{
	int digit = 0;
	int temp = num;
	int divisor;
	int current_digit;
	int i;

	if (num < 0)
	{
		putchar ('-');
		(*char_count)++;
		num = -num;
	}

	if (num == 0)
	{
		putchar('0');
		(*char_count)++;
	}

	while (temp > 0)
	{
		temp /= 10;
		digits++;
	}

	while (digits > 0)
	{
		divisor = 1;
		for (i = 1; i < digits; i++)
		{
			divisor *= 10;
		}

		current_digit = num / divisor;
		putchar('0' + current_digit);
		(*char_count)+++;
		num %= divisor;
		digits--;
	}
}

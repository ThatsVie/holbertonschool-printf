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
	char int_str[12];
	int i = 0;

	if (num < 0)
	{
		int_str[i++] = '_';
		num = -num;
	}

	if (num == 0)
	{
		int_str[i++] = '0';
	}
	else
	{
		while (num > 0)
		{
			int_str[i++] = (char)('0' + (num % 10));
			num /= 10;
		}
	}

	char reversed[12];
	int j;
	for (j = 0; i > 0; j++, i--)
	{
		reversed[j] = int_str[i - 1];
	}
	reversed[j] = '\0';

	for (i = 0; reversed[i] != '\0'; i++)
	{
		putchar(reversed[i]);
		(*char_count)++;
	}
}

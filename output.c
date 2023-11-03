#include <stdio.h>

void print_int(int *char_count, int num)
{
	int temp, digits, divisor, i, digit;
	
	if (num < 0)
	{
		putchar ('-');
		(*char_count)++;
		num = -num;
	}

	temp = num;
	digits = 0;
	do
	{
		temp /= 10;
		digits++;
	}
	while (temp);

	temp = num;
	divisor = 1;
	digit = 0;
	for (i = digits - 1; i > 0; i--)
	{
		divisor *= 10;
	}

	while (digits > 0)
	{
		digits = num / divisor;
		num %= divisor;
		putchar('0' + digit);
		(*char_count)++;
		digits--;
		divisor = 1;
	}
}

#include <stdio.h>
#include <stdlib.h>
/**
 * itoa - convert an integer to a string
 * @num: integer to be converted
 * @str: character array to store the string
 * @base: numberic base for conversion
 * Return: a pointer to the resulting string
 */
char *itoa(int num, char *str, int base)
{
	int i = 0;
	int isNegative = 0;
	char temp;
	int rem;
	int start = 0;
	int end = 0;

	if (num == 0)
	{
		str[i++] = '0';
		str[i] = '\0';
		return (str);
	}
	if (num < 0 && base == 10)
	{
		isNegative = 1;
		num = -num;
	}
	while (num != 0)
	{
		rem = num % base;
		str[i++] = (rem > 9) ? (rem - 10) + 'a' : rem + '0';
		num /= base;
	}
	if (isNegative && base == 10)
		str[i++] = '-';
	str[i] = '\0';
	for (start = 0, end = i - 1; start < end; start++, end--)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
	}
	return (str);
}

#include "main.h"
/**
 * _printChar - print a single character
 * @args: va_list containing character to print
 *
 * Return: number of characters printed
 */

int _printChar(va_list args)
{
	char c = va_arg(args, int);

	return (write(1, &c, 1));
}

/**
 * _printString - print a string
 * @args: va_list containing the string to print
 *
 * Return: number of characters printed
 */

int _printString(va_list args)
{
	char *s = va_arg(args, char *);

	if (s == NULL)
		s = "(null)";
	return (write(1, s, strlen(s)));
}

/**
 * _printInt - print an integer
 * @args: va_list containing integer to print
 *
 * Return: number of characters printed
 */

int _printInt(va_list args)
{
	char buffer[20];
	long int num;
	int isneg = 0;
	int len, j;
	int i = 0;

	if (sizeof(int) == sizeof(long int))
	{
		num = va_arg(args, long int);
	}
	else
	{
		num = va_arg(args, int);
	}
	if (num < 0)
	{
		isneg = 1;
		num = -num;
	}
	do {
		buffer[i++] = num % 10 + '0';
		num /= 10;
	}

	while (num > 0);
	len = strlen(buffer);
	if (isneg)
	{
		buffer[i++] = '-';
	}
	len = i;
	for (j = 0; j < i / 2; j++)

	{
		char temp = buffer[j];

		buffer[j] = buffer[i - j - 1];
		buffer[i - j - 1] = temp;

	}
	return (write(1, buffer, len));
}
PrintFunction specifiers[] = {
	{"d", _printInt},
	{"i", _printInt},
};

/**
 * _printPercent - print  a percent sign
 * @args: va_list (not used)
 *
 * Return: number of characters printed
 */
int _printPercent(va_list args)
{
	char p = '%';
	(void)args;
	return (write(1, &p, 1));
}
/**
 * _putchar - writes character to standard output
 * @c: character
 *
 * Return: number of characters written or -1 error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

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
	return (write(1,&c, 1));
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
	int num = va_arg(args, int);
	int base = 10;
	char *str = buffer;

	itoa(num, str, base);
	return (write(1, buffer, strlen(buffer)));
}

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


#include "main.h"
/**
 * _printChar - print a single character
 * @args: va_list containing character to print
 *
 * Return: number of characters printed
 */

int _printChar(va_list args)
{
	char c = va_arg(args, int);/*Get the next argument of type int from va_list*/

	return (write(1, &c, 1));/*Write the character to standard output and return the number of characters written*/
}

/**
 * _printString - print a string
 * @args: va_list containing the string to print
 *
 * Return: number of characters printed
 */

int _printString(va_list args)
{
	char *s = va_arg(args, char *);/*Get the next argument of type char* from va_list*/

	if (s == NULL)
		s = "(null)";/*If the string is NULL, assign a default value*/
	return (write(1, s, strlen(s)));/*Write the string to standard output and return the number of characters written*/
}

/**
 * _printInt - print an integer
 * @args: va_list containing integer to print
 *
 * Return: number of characters printed
 */

int _printInt(va_list args)
{
	char buffer[20];/*Buffer to store the integer as a string*/
	long int num;/*Variable to store the integer value*/
	int isneg = 0;/*Flag to indicate if the number is negative*/
	int len, j;
	int i = 0;

	if (sizeof(int) == sizeof(long int))
	{
		num = va_arg(args, long int);/*Get the next argument of type long int from va_list*/
	}
	else
	{
		num = va_arg(args, int);/*Get the next argument of type int from va_list*/
	}
	if (num < 0)
	{
		isneg = 1;/*Set the flag if the number is negative*/
		num = -num;/*Convert the number to positive*/
	}
	do {
		buffer[i++] = num % 10 + '0';/*Convert each digit to a character and store it in the buffer*/
		num /= 10;
	}

	while (num > 0);
	len = strlen(buffer);/*Calculate the length of the number*/
	if (isneg)
	{
		buffer[i++] = '-';/*Add a '-' sign if the number is negative*/
	}
	len = i;/*Update the length with the actual number of characters*/
	for (j = 0; j < i / 2; j++)

	{
		char temp = buffer[j];/*Swap the characters in the buffer to reverse the number*/

		buffer[j] = buffer[i - j - 1];
		buffer[i - j - 1] = temp;

	}
	return (write(1, buffer, len));/*Write the number to standard output and return the number of characters written*/
}
PrintFunction specifiers[] = {
	{"d", _printInt},
	{"i", _printInt},
};/*Register the print function for 'd' and 'i' format specifier*/

/**
 * _printPercent - print  a percent sign
 * @args: va_list (not used)
 *
 * Return: number of characters printed
 */
int _printPercent(va_list args)
{
	char p = '%';
	(void)args;/*Silence the unused argument warning*/
	return (write(1, &p, 1));/*Write the percent sign to standard output and return the number of characters written*/
}
/**
 * _putchar - writes character to standard output
 * @c: character
 *
 * Return: number of characters written or -1 error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));/*Write the character to standard output and return the number of characters written*/
}

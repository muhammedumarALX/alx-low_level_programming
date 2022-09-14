#include "main.h"

/**
 * print_last_digit - function to print last digit
 * @c: uses the argument
 * Return: Always 0
 */
int print_last_digit(int c)
{
	int last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit *= -1;
		-putchar(last_digit + '0');
		return (last_digit);
	}
}

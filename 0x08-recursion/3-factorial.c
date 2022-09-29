#include "main.h"

/**
 *factorial -  funtion that returns the factorial of a given number
 *@n: input number
 *Return: -1 for an error, 1 for 0 and n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}

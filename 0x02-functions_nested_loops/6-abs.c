#include "main.h"

/**
 * _abs - prints absolute value of an int
 * @c: is the int that uses the argument function
 * Return: Always 0 
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
	{
		return (c * -1);
	}
}

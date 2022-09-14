#include "main.h"

/**
 * _islower -function to return 1 if lower
 * @c: int to be an argument
 * Return: Always 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
	return (0);
	}
}

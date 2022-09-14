#include "main.h"

/**
 * _isalpha - function to return 1 if c is an alphabet
 * @c: int that determines argument
 * Return: Always 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

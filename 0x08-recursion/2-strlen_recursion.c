#include "main.h"

/**
 * _strlen_recursion - function that returns length of a string
 * @s: input string
 *
 * Return: Nothing
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
		return (1 + _strlen_recursion(s + 1));
}

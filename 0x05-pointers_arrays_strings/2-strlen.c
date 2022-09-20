#include "main.h"

/**
 * _strlen - funtion to print out length of string array
 * @s: input string.
 * Return: length of string
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}

#include "main.h"

/**
 * puts2 - function to print mulitiple of 2
 * @str: input string
 * Return: Nothing
 */
void puts2(char *str)
{
	int count = 0;


	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\0');
			break;
		}
	
		if (count % 2 == 0)
		_putchar(str[count]);
		count++;
	}
}

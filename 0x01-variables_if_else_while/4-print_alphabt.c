#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/*Declaring variables*/
	char i;

	/*to print alphabets*/
	for (i = 'a'; i <= 'z'; i++)
	{
	/*to remove e and q*/
		if (i != 'e' && i != 'q')
		{
			putchar(i);
		}
	}

	putchar('\n');
	return (0);
}

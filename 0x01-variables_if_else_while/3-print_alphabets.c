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
	
	for (i = 'a'; i <= 'z'; i++)
	{
		/*printing lowercase*/
		putchar(i);
	}

	for (i = 'A'; i <= 'Z'; i++)
	{
		/*printing uppercase*/
		putchar(i);
	}

	putchar('\n');
	return (0);
}

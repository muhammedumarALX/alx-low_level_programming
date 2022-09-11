#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/*Declaring variables*/
	char alphabets[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	/*the for loop*/
	for (i = 0; i < 26; i++)
	{
		/*printing out output using putchar*/
		putchar(alphabets[i]);
	}
	putchar('\n');
	return (0);
}

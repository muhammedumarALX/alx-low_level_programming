#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: -Always 0 (Success)
 */
int main(void)
{
	/*Declare Variable*/
	char i;
	/*program to run*/
	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	/*output*/
	putchar('\n');
	return (0);
}

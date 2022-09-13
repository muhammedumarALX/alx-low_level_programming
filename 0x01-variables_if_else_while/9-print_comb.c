#include <stdio.h>

/**
 * main - Entry point for the numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/*delcare variable*/
	int i;

	for (i =48; i < 58; i++)
	{
	putchar(i);
	if (i != 57)
		{
		putchar(',');
		putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/*declare variables*/
	char i;
	int j;
	
	/*inserting numeric values*/
	for (j = 48; j < 58; j++)
		putchar(j);
	/*inserting alphabetic values*/
	for (i = 'a'; i <= 'f'; i++)
		putchar(i);
	/*printing output*/
	putchar('\n');
	return (0);
}

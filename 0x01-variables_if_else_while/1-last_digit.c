#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point the program for last digit runs
 *
 * Return: Mostly 0 (Success)
 */
int main(void)
{
	int n, i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*Formular for last digit*/
	i = n % 10;

	/*condition to print last digit*/
	if (i > 5)
	{
		printf("Last digit %d is %d and is greater than 5\n", n, i);
	}
	/*condition if i is equal to zero*/
	else if (i == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, i);
	}
	/*the last digit is less than 6 and not 0*/
	else
	{
		printf("Last digit of %d is %d and is less than 6 and 0\n", n, i);
	}
	/*ending the program and return the output*/
	return (0);

}

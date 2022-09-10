#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, i;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*formula to get last ten digits*/
	i = n % 10;
	
	/*to print n is greater than five*/
	if ( i > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, i);
	}
	/*to print zero*/
	else if ( i == 0)
	{
		printf("Last digit of %d is %d and is zero\n", n, i);
	}
	/*to print less than six*/
	else
	{
		printf("Lasst digit of %d is %d and is less than 6 and not 0\n", n, i);
	}
	
	/*return*/
	return (0);

}

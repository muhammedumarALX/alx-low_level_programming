#include "main.h"

/**
 * swap - function that swaps value of variables
 * @a: first variable
 * @b: second variable
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

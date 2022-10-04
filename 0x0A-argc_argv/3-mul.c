#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - writes a program that multiples two numbers
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 if successfull, 1 if there is an error
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

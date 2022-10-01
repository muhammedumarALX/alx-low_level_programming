#include "main.h"
#include <stdio.h>

/**
 * main - write a program thatprints all arguments it receives
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);

}

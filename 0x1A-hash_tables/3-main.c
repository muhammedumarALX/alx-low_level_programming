#include  <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the ciode
 *
 * return: Always EXIT_SUCCESS
 */
int main(void)
{
	hash_table_ *ht;

	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "cool");
	return (EXIT_SUCCESS)
}

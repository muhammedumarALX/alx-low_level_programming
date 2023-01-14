/**
 * hash_djb2 - computes the hash of an
 * array of the bytes using the db2 algorithm.
 * @str: The byte array.
 *
 * Return: A fixed size unsigned integer digest.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}

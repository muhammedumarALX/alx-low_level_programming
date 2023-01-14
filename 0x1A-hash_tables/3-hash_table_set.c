#include "hash_tables.h"

/**
 * str_copy - craetes a copy of a given string
 * @s: The string to copy.
 *
 * Return: A pointer to the created string, otherwise NULL.
 */
char *str_copy(const char *s)
{
	int i, len;
	char *s_c = NULL;

	if (s != NULL)
	{
		len = strlen(s);
		s_c = malloc(sizeof(char) * (len + 1));
		if (s_c != NULL)
		{
			for (i = 0; i < len; i++)
				s_c[i] = s[i];
			s_c[i] = '\0';
		}
	}
	return (s_c);
}

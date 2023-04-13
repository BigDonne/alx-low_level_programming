#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_djb2 - A hash function generates a djb2
 * @str: The pointer to chars in a hash function
 *
 * Return: A hash key of the string
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long hash = 5381;
	int c;

	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}

	return (hash);
}

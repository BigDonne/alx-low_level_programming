#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * key_index - This generates the key in a  hash table
 * @key: The key generated
 * @size: size table
 *
 * Return: The index of a key in a table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

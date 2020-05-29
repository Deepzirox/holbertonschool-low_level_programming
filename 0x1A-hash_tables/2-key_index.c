#include "hash_tables.h"
/**
 * key_index - get index of key
 * @key: string
 * @size: size of hash table
 * Return: index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i;

	i = hash_djb2(key);

	return (i % size);
}

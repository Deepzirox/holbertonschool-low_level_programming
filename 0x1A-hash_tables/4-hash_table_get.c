#include "hash_tables.h"
/**
 * hash_table_get - get value of table by key
 * @ht: hash table
 * @key: key in hash table
 * Return: Value if Success (null) if fail
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int k;

	if (ht != NULL)
		k = key_index((unchar)key, ht->size);
	else
		return (NULL);

	if (ht->array[k] == NULL)
		return (NULL);

	if (hash_djb2((unchar)ht->array[k]->key) == hash_djb2((unchar)key))
		return (ht->array[k]->value);
	else
		return (NULL);
}

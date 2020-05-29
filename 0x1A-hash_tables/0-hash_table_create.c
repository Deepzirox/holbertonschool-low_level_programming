#include "hash_tables.h"
/**
 * hash_table_create - start has table
 * @size: lenght of table
 * Return: new table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = malloc(sizeof(hash_table_t));


	new_table->size = size;
	new_table->array = calloc((size_t)new_table->size, sizeof(hash_node_t *));


	return (new_table);
}

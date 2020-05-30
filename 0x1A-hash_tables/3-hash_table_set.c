#include "hash_tables.h"

/**
 * _strdup - copy string to new memory
 * @str: string to copy
 * Return: pointer to new string
 */
char *_strdup(char *str)
{
	char *aux;
	int counter = 0, i;

	if (str == NULL)
		return (NULL);

	while (str[counter] != '\0')
		counter++;

	counter += 1;
	aux = malloc(counter * sizeof(char));
	if (aux == NULL || counter == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < counter; i++)
		{
			aux[i] = str[i];
		}
	}
	return (aux);
}
/**
 * hash_table_set - add value to hash table
 * @ht: hash table
 * @key: keyword
 * @value: value of key
 * Return: 1 (success) 0 (fail)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t));
	unsigned long int index;

	if (new_node == NULL)
		return (0);

	if (key == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		new_node->key = (char *)key;
		new_node->value = (char *) _strdup((char *)value);
		new_node->next = NULL;
		ht->array[index] = new_node;
		return (1);
	}
	else
	{
		new_node->key = (char *)key;
		new_node->value = (char *) _strdup((char *)value);
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
		return (1);
	}
	return (1);
}

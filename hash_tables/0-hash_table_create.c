#include "hash_tables.h"
/**
 * hash_table_create -  creates a hash table
 * @size: parametr size
 * Description: The function creates a hash table
 * Return: pointer to the newly created hash table or NULL
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);

	return (table);
}

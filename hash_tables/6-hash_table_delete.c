#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: parametr ht
 * Description: The function deletes a hash table
 * Return: Nothing
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;

	if (ht == NULL || ht->array == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			temp = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = temp;
		}
	}

	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}

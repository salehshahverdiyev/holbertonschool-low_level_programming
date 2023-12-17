#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: parametr ht
 * Description: The function prints a hash table
 * Return: Nothing
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	char *comma = "";

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		while (node != NULL)
		{
			printf("%s'%s': '%s'", comma, node->key, node->value);
			comma = ", ";
			node = node->next;
		}
	}
	printf("}\n");
}

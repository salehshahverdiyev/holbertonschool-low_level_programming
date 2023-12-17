#include "hash_tables.h"
/**
 * crt_hash_node - creates a hash node
 * @key: parametr key
 * @value: parametr value
 * Description: The function creates a new hash node
 * Return: returns the pointer to the new hash node or NULL
*/
hash_node_t *crt_hash_node(const char *key, const char *value)
{
	hash_node_t *hash_node;

	hash_node = malloc(sizeof(hash_node_t));
	if (hash_node == NULL)
		return (NULL);

	hash_node->key = strdup(key);

	if (hash_node->key == NULL)
	{
		free(hash_node);
		return (NULL);
	}

	hash_node->value = strdup(value);

	if (hash_node->value == NULL)
	{
		free(hash_node->key);
		free(hash_node);
		return (NULL);
	}

	hash_node->next = NULL;
	return (hash_node);
}
/**
 * hash_table_set - adds an element to the hash table
 * @ht: parametr ht
 * @key: parametr key
 * @value: parametr value
 * Description: The function adds an element to the hash table
 * Return: 1 if it succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *hash_node, *temp;
	char *new_value;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[idx];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
				return (0);
			free(temp->value);
			temp->value = new_value;
			return (1);
		}
		temp = temp->next;
	}
	hash_node = crt_hash_node(key, value);
	if (hash_node == NULL)
		return (0);
	hash_node->next = ht->array[idx];
	ht->array[idx] = hash_node;

	return (1);
}

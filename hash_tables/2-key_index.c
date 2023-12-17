#include "hash_tables.h"
/**
 * key_index - gives the index of the key
 * @key: parametr key
 * @size: parametr size
 * Description: The function gives you the index of the key
 * Return: returns the index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

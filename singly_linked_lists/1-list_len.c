#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
 * list_len - eturns the number of elements
 * @h: head
 * Description: The function returns the number of elements in a linked list
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	int sum = 0;

	while (h != NULL)
	{
		h = h->next;
		sum++;
	}
	return (sum);
}

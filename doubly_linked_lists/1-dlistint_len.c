#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * dlistint_len -  returns the number of elements
 * @h: head
 * Description: The function returns the number of elements in a linked list
 * Return: IDK
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;

	if (!h)
		return (size);
	while (h)
	{
		h = (*h).next;
		size++;
	}
	return (size);
}

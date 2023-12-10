#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dlistint - prints all the elements
 * @h: head
 * Description: The function prints all the elements of a list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;

	if (!h)
		return (size);
	while (h)
	{
		printf("%d\n", (*h).n);
		h = (*h).next;
		size++;
	}
	return (size);
}

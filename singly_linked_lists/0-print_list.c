#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
 * print_list - prints all the elements
 * @h: head
 * Return: the number of nodes
 * Description: The function prints all the elements of a list_t list
 */
size_t print_list(const list_t *h)
{
	int sum = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		sum++;
	}
	return (sum);
}

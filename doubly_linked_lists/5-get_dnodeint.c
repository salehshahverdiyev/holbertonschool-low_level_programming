#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t
 * @head: head
 * @index: parametr index
 * Description: The function returns the nth node of a dlistint_t linked list
 * Return: nth node or NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int n = 0;

	if (!temp)
		return (NULL);
	while (temp)
	{
		if (n == index)
			return (temp);
		temp = (*temp).next, n++;
	}
	return (NULL);
}

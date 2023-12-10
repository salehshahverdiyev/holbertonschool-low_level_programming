#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * add_dnodeint_end - adds a new node at the end
 * @head: head
 * @n: parametr n
 * Description: The function adds a new node at the end of a list
 * Return: the address of the new element, or NULL
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t)), *temp;

	if (!node)
	{
		free(node);
		return (NULL);
	}

	(*node).n = n;
	(*node).next = NULL;
	if (!*head)
	{
		*head = node;
		return (node);
	}
	temp = *head;
	while ((*temp).next)
		temp = (*temp).next;
	(*node).prev = temp;
	(*temp).next = node;
	return (node);
}

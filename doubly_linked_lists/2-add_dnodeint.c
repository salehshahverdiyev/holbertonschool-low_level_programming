#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * add_dnodeint - adds a new node at the beginning
 * @head: head
 * @n: parametr n
 * Description: The function adds a new node at the beginning of a list
 * Return: the address of the new element, or NULL
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (!node)
	{
		free(node);
		return (NULL);
	}

	(*node).n = n;
	(*node).prev = NULL;
	(*node).next = *head;
	if (*head)
		(**head).prev = node;
	*head = node;
	return (node);
}

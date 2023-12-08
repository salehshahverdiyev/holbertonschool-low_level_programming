#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node_end - adds a new node at the end
 * @head: head
 * @str: parametr str
 * Description: function adds a new node at the end of list
 * Return: the address of the new element, or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp = *head, *newnode;

	newnode = malloc(sizeof(list_t));

	if (newnode)
	{
		newnode->str = strdup(str);
		newnode->len = strlen(str);
		newnode->next = NULL;

		if (*head == NULL)
		{
			*head = newnode;
		}
		else
		{
			while (tmp->next != NULL)
				tmp = tmp->next;

			tmp->next = newnode;
		}
		return (newnode);
	}
	return (NULL);
}

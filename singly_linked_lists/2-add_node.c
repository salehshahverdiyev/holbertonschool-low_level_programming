#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node - dds a new node
 * @head: head
 * @str: parametr str
 * Description: function adds a new node at the beginning of list
 * Return: the address of the new element, or NULL
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (str == NULL)
		str = "";
	temp = malloc(sizeof(list_t));
	if (temp)
	{
		temp->next = *head;
		temp->len = strlen(str);
		temp->str = strdup(str);
		if (!temp->str)
		{
			free(temp->str);
			free(temp->next);
			free(temp);
			return (NULL);
		}
		*head = temp;
		return (*head);
	}
	return (NULL);
}

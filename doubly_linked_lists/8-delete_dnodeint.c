#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: head
 * @index: parametr index
 * Description: The function deletes the node at index index of a linked list
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int temp_index = 0;
	dlistint_t *temp = *head;

	if (!head || !temp)
		return (-1);
	if (!index)
	{
		if ((*temp).next)
			(*(**head).next).prev = NULL;
		*head = (**head).next;
		free(temp);
		return (1);
	}
	while (temp_index < index)
	{
		if (!(*temp).next)
			return (-1);
		temp = (*temp).next;
		temp_index++;
	}
	(*(*temp).prev).next = (*temp).next;
	if ((*temp).next)
		(*(*temp).next).prev = (*temp).prev;
	free(temp);
	return (1);
}

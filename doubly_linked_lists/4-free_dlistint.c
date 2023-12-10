#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dlistint - frees list
 * @head: head
 * Description: The function frees a dlistint_t list
 * Return: IDK
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = (*head).next;
		free(temp);
	}
}

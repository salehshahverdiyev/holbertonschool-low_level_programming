#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees a list
 * @head: head
 * Return: IDK
 * Description: The function frees a list_t list
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}

#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_dlistint - returns the sum of all the data (n) of a linked list
 * @head: head
 * Description: The function returns the sum of all the data (n) of a linked list
 * Return: the sum of all the data
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (!temp)
		return (0);
	while (temp)
	{
		sum += (*temp).n;
		temp = (*temp).next;
	}
	return (sum);
}

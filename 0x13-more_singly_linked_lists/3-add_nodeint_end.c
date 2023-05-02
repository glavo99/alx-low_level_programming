#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - add a new node at the end of a listint_t list
 * @head: pointer to first node of the list
 * @n: element content
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = *head;
	listint_t *node = malloc(sizeof(struct listint_s));

	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = node;
	}
	return (*head);
}

#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to first element
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	if (h == NULL)
	{
		return (0);
	}
	return (1 + print_listint(h->next));
}

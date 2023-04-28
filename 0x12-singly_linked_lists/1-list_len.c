#include "lists.h"
#include <stddef.h>

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to first element
 * Return: returns the number of elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	if (h == NULL)
	{
		return (0);
	}
	return (1 + list_len(h->next));
}

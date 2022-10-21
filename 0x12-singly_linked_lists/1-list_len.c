#include "lists.h"

/**
 *list_len - singly link list.
 * @h: a pointer to a struct.
 *
 * Description: singly linked list node structure
 * Return: return the count.
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

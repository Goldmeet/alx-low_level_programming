#include "lists.h"

/**
 *print_list - singly link list.
 * @h: a pointer to a struct.
 *
 * Description: singly linked list node structure
 * Return: return the count.
 */

size_t print_list(const list_t *h)
{
	int count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

#include "lists.h"
/**
 * listint_len - singly linked list
 * @h: integer
 *
 * Description: singly linked list node structure
 *Return: return unsigned value
 */

size_t listint_len(const listint_t *h)
{
	size_t count;
	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

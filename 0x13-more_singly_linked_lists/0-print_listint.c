#include "lists.h"

/**
 * print_listint - singly linked list
 * @h: integer
 *
 * Description: print the element of the list
 *Return: return unsigned value
 */

size_t print_listint(const listint_t *h)
{
	size_t count;
	count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}

#include <stdlib.h>
#include "lists.h"
/**
 * print_list- singly linked list
 * @h: - (malloc'ed string)
 *
 *
 * Description: singly linked list node structure
 * Return: return count.
 */
size_t print_list(const list_t *h)
{
	int count =0;
	while (h != NULL)
	{
		count++;
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		printf("[%d]%s\n", h->len, h->str);
		h = h->next;
	}
	return (count);
}

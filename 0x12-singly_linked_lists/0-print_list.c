
#include "lists.h"
#include <stdlib>
/**
 *print_list - singly link list.
 * @h: a pointer to a struct.
 * Description: singly linked list node structure
 * Return: return the count.
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


#include "lists.h"
/**
 * free_listint - singly linked list
 * @head: pointer to struct
 *
 * Description: singly linked list node structure
 *Return: return unsigned value
 */
void free_listint(listint_t *head)
{
        listint_t *temp = head;
        while (temp != NULL)
        {
                temp = temp->next;
                free(head);
                head = temp;
        }
	head = NULL;
}

#include "lists.h"
/**
 * listint_t *add_nodeint_end - singly linked list
 * @n: integer
 *@head: pointer to struct.
 * Description: singly linked list to add a node at the end of the list.
 *Return: return a struct.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *ptr;
	
	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	ptr = *head;

	while(ptr->next != NULL)
		{
		   ptr = ptr->next;
		}
	ptr->next = new_node;
	return (new_node);
}

#include "lists.h"
/**
 * add_nodeint - singly linked list
 * @n: integer
 * @head: points to the next node
 *
 * Description: singly linked list node structure
 *Return: return list.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}

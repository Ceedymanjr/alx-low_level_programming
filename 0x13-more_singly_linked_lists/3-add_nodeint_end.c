#include "lists.h"
/**
 * add_nodeint_end - function that add node at the end of list
 * @head: head pointer
 * @n: number of node
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_node;
	listint_t *tmp;

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
	{
		return (NULL);
	}
	n_node->n = n;
	n_node->next = (NULL);

	if (*head == NULL)
	{
		*head = n_node;
	}
	else
	{
		tmp = *head;
	}
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	 tmp->next = n_node;

	return (n_node);
}

#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts
 * a new node at a given position
 * @head: head pointer
 * @idx: index were node will be added
 * @n: number of node
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *n_new;
	listint_t *tmp = *head;

	n_new = malloc(sizeof(listint_t));
	if (!n_new || !head)
		return (NULL);

	n_new->n = n;
	n_new->next = NULL;

	if (idx == 0)
	{
		n_new->next = *head;
		*head = n_new;
		return (n_new);
	}

	for (x = 0; tmp && x < idx; x++)
	{
		if (x == idx - 1)
		{
			n_new->next = tmp->next;
			tmp->next = n_new;
			return (n_new);
		}
		else
			tmp = tmp->next;
	}
	return (NULL);
}

#include "lists.h"
/**
 * delete_nodeint_at_index - function that deleates node at index
 * @head: pointer to the head
 * @index: number of index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *n_node = NULL;
	listint_t *tmp = *head;
	unsigned int x = 0;

	if (*head == NULL)
	{
		return (-1);

		if (index == 0)
		{
			*head = (*head)->next;
			free(tmp);
			return (1);
		}
		while (x < index - 1)
		{
			if (!tmp || !(tmp->next))
				return (-1);
			tmp = tmp->next;
			 x++;
		}
		n_node = tmp->next;
		tmp->next = n_node->next;
		free(n_node);
	}
	return (1);
}

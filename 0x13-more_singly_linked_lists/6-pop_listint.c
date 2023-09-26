#include"lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t
 * @head: head pointer
 * Return: if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int cont;

	if (!head || !*head)
		return (0);

	cont = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (cont);
}

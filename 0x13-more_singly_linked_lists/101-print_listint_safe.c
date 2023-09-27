#include "lists.h"
/**
 * print_listint_safe - function that prints a listint_t linked list
 * @head: head pointer
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n_nodes, index = 0;

	n_nodes = looped_listint_len(head);

	if (n_nodes == 0)
	{
		for (; head != NULL; n_nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < n_nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (n_nodes);
}

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t
 * @head: A pointer to the head of the listint_t to check
 * Return: 0 Otherwise the number of unique nodes in the list
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *advenced, *frees;
	size_t n_nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	advenced = head->next;
	frees = (head->next)->next;

	while (frees)
	{
		if (advenced == frees)
		{
			advenced = head;
			while (advenced != frees)
			{
				n_nodes++;
				advenced = advenced->next;
				frees = frees->next;
			}
			advenced = advenced->next;
			while (advenced != frees)
			{
				n_nodes++;
				advenced = advenced->next;
			}

			return (n_nodes);
		}
		advenced = advenced->next;
		frees = (frees->next)->next;
	}
	return (0);
}

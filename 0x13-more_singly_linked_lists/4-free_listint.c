#include "lists.h"
/**
 * free_listint - functin thar free listint_t
 * @head: head point
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}

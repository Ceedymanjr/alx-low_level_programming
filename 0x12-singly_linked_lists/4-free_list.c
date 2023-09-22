#include "lists.h"
/**
 * free_list - function that free list_t
 * @head: head pointer
 * Return: Always 0
 */

void free_list(list_t *head)
{
	list_t *new;

	while (head)
	{
		new = head->next;
		free(head->str);
		free(head);
		head = new;
	}
}

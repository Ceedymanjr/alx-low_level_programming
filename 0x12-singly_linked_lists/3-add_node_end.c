#include "lists.h"
/**
 * *add_node_end - function that add new node in the end
 * @head: head pointer
 * @str: funtion pointer
 * Return: address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node, *new;
	unsigned int i, ncount;

	ncount = 0;

	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
		return (NULL);
	n_node->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		ncount++;
	n_node->len = ncount;
	n_node->next = NULL;
	new = *head;

	if (new == NULL)
		*head = n_node;
	else
	{
		while (new->next != NULL)
			new = new->next;
		new->next = n_node;
	}
	return (*head);
}

#include "lists.h"
/**
 * *add_node - function that add node in the begining
 * @str: pointer to the function
 * @head: head pointer
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n_node;
	unsigned int i, ncount = 0;

	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
		return (NULL);
	n_node->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		ncount++;
	n_node->len = ncount;
	n_node->next = *head;
	*head = n_node;

	return (*head);
}

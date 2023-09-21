#include "lists.h"
/**
 * list_len - function that returns the number of elements
 * @h: pointer of the function
 * Return: length of the node
 */
size_t list_len(const list_t *h)
{
	size_t node;

	node = 0;

	while (h != NULL)
	{
		h = h->next;
		node++;
	}
	return (node);
}

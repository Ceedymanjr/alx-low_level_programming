#include"lists.h"
/**
 * print_listint - function that print all the elements
 * @h: head pointer
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n_count++;
	}
	return (n_count);
}

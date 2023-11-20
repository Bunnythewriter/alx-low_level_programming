#include "lists.h"
/**
 * print_listint -print int data in a singly list
 * @h: the head pointer to the list
 * Return: number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count;

	if (h == NULL)
		return (0);
	for (node_count = 0; h != NULL; node_count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (node_count);
}

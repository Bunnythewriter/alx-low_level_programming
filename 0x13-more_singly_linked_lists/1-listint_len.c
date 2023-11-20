#include "lists.h"
/**
 * listint_len -counts the number of elements in a list.
 * @h: head pointer
 * Return: number of elements in a linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	for (count = 0; h != NULL; count++)
	{
		h = h->next;
	}
	return (count);
}

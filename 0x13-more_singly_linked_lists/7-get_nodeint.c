#include "lists.h"
/**
 * get_nodeint_at_index -retrieve a node at an index
 * @head: pointer to the first element
 * @index: node desired position to retrieve
 * Return: nth node of a listint_t linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int b;

	for (b = 0; b < index; b++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}

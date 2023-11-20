#include "lists.h"
/**
 * delete_nodeint_at_index -deletes a node at a particular index
 * @head: pointer to the beginning of the list
 * @index: index of the node to be freed
 * Return: 1 if successful and -1 if not
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int e;
	listint_t *tmp;
	listint_t *node;

	tmp = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	for (e = 0; e < index - 1 && tmp != NULL && index != 0; e++)
		tmp = tmp->next;
	if (tmp == NULL)
		return (-1);
	if (index == 0)
	{
		node = tmp->next;
		free(tmp);
		*head = node;
	}
	else
	{
		if (tmp->next == NULL)
			node = tmp->next;
		else
			node = tmp->next->next;
		free(tmp->next);
		tmp->next = node;
	}
	return (1);
}

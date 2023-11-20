#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: data that is being deleted.
 * Return: head node’s data.
 */
int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int n = 0;

	if (*head != NULL)
	{
		new_head = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = new_head;
	}

	return (n);
}
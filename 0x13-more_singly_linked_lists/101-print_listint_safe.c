#include "lists.h"
/**
 * print_listint_safe -prints a linked list
 * @head: pointer to list
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t counta = 0, countb;
	const listint_t *temp = head;
	const listint_t *next_node;

	while (temp != NULL)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
			counta++;

			temp = temp->next;
			next_node = head;

			countb = 0;

			while (counta < countb)
			{
				if (temp == next_node)
				{
					printf("-> [%p] %d\n", (void *)temp, temp->n);
						return (counta);
				}

				next_node = next_node->next;
				countb++;
			}
	}
	return (counta);
}

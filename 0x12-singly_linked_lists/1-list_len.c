#include "lists.h"
/**
* list_len -length of list
* @h: pointer to the first node
* Return: number of nodes in the list
*/
size_t list_len(const list_t *h)
{
int a;

if (h == NULL)
return (0);

for (a = 1; h->next != NULL; a++)
	h = h->next;
return (a);
}

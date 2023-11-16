#include "lists.h"
/**
* print_list - print all elements in a singly linked list
* @h: pointer to a linked list head
* Return: total number of nodes in the list
*/

size_t print_list(const list_t *h)
{
int a;

if (h == NULL)
	return (0);
for (a = 1; h->next != NULL; a++)
{
if (h->str == NULL)
printf("[%lu] %s\n", h->len, "(nil)");
else
	printf("[%lu] %s\n", h->len, h->str);
h = h->next;
}
printf("[%lu] %s\n", h->len, h->str);
return (a);
}

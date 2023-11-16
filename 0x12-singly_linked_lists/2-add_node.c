#include "lists.h"

int len(const char *str);
/**
* add_node -add a node to the beginning of the list
* @head: pointer to the head of the list
* @str: string to be inserted to the first position
* Return: pointer to the first node
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;

if (head == NULL)
	return (NULL);
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
	return (NULL);

if (*head == NULL)
	new_node->next = NULL;
else
new_node->next = *head;
new_node->str = strdup(str);
new_node->len = len(str);
*head = new_node;
return (*head);

}
/**
* len -get the length of the string
* @str: the string to get its length
* Return: length of string
*/

int len(const char *str)
{
int a;

if (str == NULL)
return (0);
a = 0;
while (str[a] != '\0')
{
a++;
}
return (a);
}

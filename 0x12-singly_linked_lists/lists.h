#ifndef _lists_h_
#define _lists_h_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* struct list_s - singly linked
* @str: string malloced
* @len: length of string
* @next: pointer to the next node
*/

typedef struct list_s
{
char *str;
size_t len;
struct list_s *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);

#endif /*list_h_*/
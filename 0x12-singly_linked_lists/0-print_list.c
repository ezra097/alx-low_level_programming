0x12. C - Singly linked lists
0x12. C - Singly linked lists




README.md


Project:

0x12. C - Singly linked lists



==========================
































lists.h


#ifndef LISTS_H

#define LISTS_H


/**

 * struct list_s - singly linked list

 * @str: string - (malloc'ed string)

 * @len: length of the string

 * @next: points to the next node

 *

 * Description: singly linked list node structure

 * for Holberton project

 */

typedef struct list_s

{

        char *str;

        unsigned int len;

        struct list_s *next;

} list_t;


size_t print_list(const list_t *h);

size_t list_len(const list_t *h);

list_t *add_node(list_t **head, const char *str);

list_t *add_node_end(list_t **head, const char *str);

void free_list(list_t *head);


#endif










0-print_list.c


#include <stdio.h>

#include "lists.h"


/**

 * print_list - prints all the elements of a linked list

 * @h: pointer to the list_t list to print

 *

 * Return: the number of nodes printed

 */

size_t print_list(const list_t *h)

{

 size_t s = 0;


 while (h)

 {

 if (!h->str)

 printf("[0] (nil)\n");

 else

 printf("[%u] %s\n", h->len, h->str);

 h = h->next;

 s++;

 }


 return (s);

}

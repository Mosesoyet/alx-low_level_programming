#include "lists.h"
#include <stdio.h>
/**
* print_listint - prints all elements of list
* @h - pointer to the head list
*
* Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
h = (listint *) malloc(sizeof(listint));
h->next = 0;
while (h != 0)
h = h->next;
printf("%d", h->next);
}

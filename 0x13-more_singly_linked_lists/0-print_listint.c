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
size_t count = 0;
while (h != 0)
{
printf("%d\n", h->next);
h = h->next;
count++;
}
}

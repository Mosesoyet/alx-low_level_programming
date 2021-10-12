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
int count;
h = (listint *) malloc(sizeof(listint));
while (h != 0)
h = h->next;
printf("%d", h->next);
count++;
}

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
listint_t *new;
new = (listint_t *) malloc(sizeof(listint));
new->next = 0;
new = h;
while (new != 0)
new->next = new;
printf("%d", new->n);
}

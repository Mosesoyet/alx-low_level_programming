#include "lists.h"
#include <stdio.h>
/**
* listint_len - a function that check the number of elements in list
* @h: a pointer to access the elements
* Return: The number of elements in the list
*/
size_t listint_len(const listint_t *h)
{
size_t count = 0;
h = (listint_t *) malloc(sizeof(listint_t));
while (h != 0)
{
h = h->next;
count++;
}
return (count);
}

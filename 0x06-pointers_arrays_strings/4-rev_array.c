#include "main.h"
#include <stdio.h>
/**
* reverse_array - print array in reverse
* @a: integer to reverse
* @n: an integer
* Return: 0 succes
*/
void reverse_array(int *a, int n)
{
int i, k;
while (i < n)
{
t = *(a + i);
*(a + i) = *(a + n);
*(a + n) = t;
i++;
n--;
}
}

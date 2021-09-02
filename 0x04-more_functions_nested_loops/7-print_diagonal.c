#include "main.h"
#include <stdio.h>
/**
* print_digonal - Print didonal line
* @n: length of the line
* Return: void
*/
void print_diagonal(int n)
{
int v, b;
if (n <= 0)
_putchar('\n');
for (v = 0; v < n; v++)
{
for (b = 0; b < v; b++)
{
_putchar(' ');
}
_putchar('\');
_putchar('\n');
}
}

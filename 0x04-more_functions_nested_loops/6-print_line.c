#include "main.h"
#include <stdio.h>
/**
* print_line - Entry point
* Description: A program to print line
* @n: Is the size to be printed
* Return: void
*/
void print_line(int n)
{
int b;
if (n <= 0)
_putchar('\n');
for (b = 0; b < n; b ++)
{
_putchar('_');
}
_putchar('\n');
}

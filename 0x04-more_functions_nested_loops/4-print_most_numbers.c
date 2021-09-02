#include "main.h"
#include <stdio.h>
/**
* print_most_numbers - Entry point
* Return: void
*/
void print_most_number(void)
{
char cx;
for (cx = '0'; cx <= '9'; cx++)
{
if (!(cx == '2' || cx == '4'))
_putchar(cx);
}
_putchar('\n');
}

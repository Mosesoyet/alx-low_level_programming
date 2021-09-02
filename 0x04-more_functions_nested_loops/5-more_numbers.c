#include "main.h"
/**
* more_numbers - Entry point
* Description: A program to display 1 to 14 ten times in a new line
* Return: void
*/
void more_numbers(void)
{
int a, b, c,, e;
for (e = 0; e < 10; e++)
{
for (a = 0; a <= 14; a++)
{
if (a < 10)
a = b;
else
{
c = a /10;
b = a % 10;
_putchar('0' + a);
}
_putchar('0' + b);
}
_putchar('\n');
}
}

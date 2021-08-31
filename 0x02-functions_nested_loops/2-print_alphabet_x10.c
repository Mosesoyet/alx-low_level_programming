#include "main.h"
/**
*print_alphabet_x10 - Entry point
*Description: Contain nested while loop 
*Return: void
*/
void print_alphabet_x10(void)
{
char x;
 int y = 0;
while (y <= 9)
{
x = 'a';
while (x <= 'z')
{ 
_putchar(x);
x++;
}
}
_putchar('\n');
}

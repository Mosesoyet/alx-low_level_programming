#include "main.h"
/**
*print_alphabet_x10 - Entry point
*Description: Contain nested while loop 
*Return: void
*/
void print_alphabet_x10(void)
{
char x = 0, y;
while (x <= 9)
{
y = 'a';
while (y <= 'z')
{
_putchar(y);
y++;
}
_putchar(x);
x++;
}
}

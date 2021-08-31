#include "main.h"
/**
*main - contain statement and loop
*Return: Always 0 success
*/
int main(void)
{
char x = 'a';
do
{
_putchar(x);
x++;
}
while (x <= 'z');
_putchar('\n');
return (0);
}

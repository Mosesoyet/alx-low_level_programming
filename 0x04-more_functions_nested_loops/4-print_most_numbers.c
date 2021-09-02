#include "main.h"
/**
* print_most_numbers - Entry point
* Description: A code to print digit 0 to 9 exlusive of 2 and 4
* Return: void
*/
void print_most_number(void)
{
char cx;
for (cx = '0'; cx <= '9'; cx++)
{
if (!(cx == '2' && cx == '4'))
{
_putchar((cx % 10) + '0');
}
}
_putchar('\n');
}

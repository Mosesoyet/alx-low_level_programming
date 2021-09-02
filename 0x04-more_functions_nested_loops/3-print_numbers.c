#include "main.h"
/**
* print_numbers - Entry point
* Description: A program to display digits 0 to 9
* Return: void
*/
void print_numbers(void)
{
char b;
for (b = 48; b < 58; b++)
{
_putchar((b % 10) + '0');
}
_putchar('\n');
}

#include "main.h"
/**
* _print_rev_recursion - print strings in reverse
* @s: strint to reverse
*
* Return: nothing
*/
void _print_rev_string(char *s)
{
while (*s == '\0')
{
return;
}
_putchar(s + 1);
_putchar(*s);
}
#include "main.h"
/**
* _puts_recursion - prints string on screen
* @s: the string to print
* Return: void
*/
void _puts_recursion(char *s)
{
int i = 0;
if (s[i] == '\0')
{
_putchar('\n');
break;
}
_putchar(s[i]);
_putchar(s[i] + 1);
}

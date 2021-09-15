#include "main.h"
/**
* _puts_recursion - prints string on screen
* @s: the string to print
* Return: void
*/
void _puts_recursion(char *s)
{
int i = 0;
if (s[i] >= '\0')
{
_putchar('\n');
return;
}
return s[i] * _puts_recursion(s[i] - 1);
}

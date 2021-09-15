#include "main.h"
/**
* _strlen_recursion - entry point
* @s: the string to measure
*
* Return: the length of the string
*/
int _strlen_recursion(int *s)
{
int i;
if (s[i] == '\0')
{
return (i--);
}
_strlen_recursion = s[i] * i(i - 1);
_putchar(*s);
}

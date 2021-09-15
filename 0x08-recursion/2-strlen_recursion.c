#include "main.h"
/**
* _strlen_recursion - entry point
* @s: the string to measure
*
* Return: the length of the string
*/
int _strlen_recursion(int *s)
{
int i = 0;
while (s[i])
{
i++;
break;
}
if (s[i] != '\n')
{
_putchar(s[i]);
_strlen_recursion = _strlen_recursion(s[i] - 1);
}
return (0);
}

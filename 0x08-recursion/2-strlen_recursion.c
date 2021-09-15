#include "main.h"
/**
* _strlen_recursion - entry point
* @s: the string to measure
*
* Return: the length of the string
*/
int _strlen_recursion(int *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}

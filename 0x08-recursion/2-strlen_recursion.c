#include "main.h"
/**
* _strlen_recursion - prints the length of string
* @s: string to print
* Return: the string length
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}

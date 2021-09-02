#include "main.h"
#include <stdio.h>
/**
* _isdigit - Entry point
* Desc: A program to check for digit
* @c: Data type to check
* Return: 1 if c is digit else 0
*/
int _isdigit(int c)
{
if (c >= 0 && c <= 9)
return (1);
else
return (0);
}

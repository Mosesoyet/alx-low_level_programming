#include "main.h"
#include <stdio.h>
/**
* string_toupper - print strings in upper case
* @j: string to convert
* Return: 0
*/
char *string_toupper(char *j)
{
int i = 0;
while (*(j + i))
{
if (*(j + i) >= 'a' && *(j + i) <= 'z')
*(j + i) -= 'a' - 'A';
i++;
}
return (0);
}

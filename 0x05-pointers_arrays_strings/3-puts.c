#include "main.h"
/**
* _puts - it put the string on stdout
* @str: the string to be printed
* Return: nothing
*/
void _puts(char *str)
{
char j = str;
while (j != '\0')
{
_putchar(j);
j++;
}
_putchar('\n');
}

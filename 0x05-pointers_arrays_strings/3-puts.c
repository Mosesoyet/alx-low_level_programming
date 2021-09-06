#include "main.h"
/**
* _puts - it put the string on stdout
* @str: the string to be printed
* Return: nothing
*/
void _puts(char *str)
{
int j;
while (*(str + j))
{
_putchar(*(str + j));
j++;
}
_putchar('\n');
}

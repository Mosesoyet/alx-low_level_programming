#include "main.h"
#include <stdio.h>
/**
* _strncpy - copies string
* @dest: destination to copy.
* @src: source of string
* Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (i < n && *(src + i))
{
*(dest + i) = *(src + i);
i++;
}
while (i < n)
*(dest + i) = '\0';
return (dest);
}

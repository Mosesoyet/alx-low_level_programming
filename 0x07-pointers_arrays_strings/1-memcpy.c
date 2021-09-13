#include "main.h"
#include <stdio.h>
/**
* _memcpy - copy memory area
* @dest: destination of copy
* @src: source of copy
* @n: bytes to copy
* Return: dest
*/
char *memcpy(char *dest, char *src, unsigned int n)
{
int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}

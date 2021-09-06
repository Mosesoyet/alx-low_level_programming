#include "main.h"
/**
* _strcpy - copy string from source to destination
* @src: source of string
* @dest: the destination of copy
* Return: the destination of copy
*/
char *_strcpy(char *dest, *src)
{
int i;
while (*(src + i))
{
*(dest + i) = *(src + i);
i++;
}
*(dest + i) = '\0';
return (dest);
}

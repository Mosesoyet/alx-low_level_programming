#include "main.h"
#include <stdio.h>
/**
* _strchr - locates charactor in a string
* @s: the string
* @c: charactor to locate
* Return: pointer to the first occurance of the charactor c int the string s, or NULL if the charactor is not found
*/
char *_strchr(char *s, char c)
{
int j;
for (j = 0; *(s + j); j++)
{
if (*(s + j) == c)
return (s + j);
}
if (*(s + j) == c)
return (s + j);
else if (*(s + j) != c)
return (NULL);
}

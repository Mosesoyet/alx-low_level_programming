#include "main.h"
/**
 *_isalpha - entry point
 *@c: Charactor to exammine
 *Return: 1 if alphabet or 0 if not
 */
int _isalpha(inc c)
{
if ((c >= 'a') || (c <= 'z') && (c >= 'A') || (c <= 'Z'))
return (1);
else
return (0);
}

#include "main.h"
/**
*_islower - entry point
*Description: Contain nested loop
*Return: always 1 else 0
*/
int _islower(int c);
{
scantf("%c", &c);
c = getchar();
for (c = 'a'; c <= 'z'; c++)
{
if (_islower(c))
return (1);
else
return (0);
}
}

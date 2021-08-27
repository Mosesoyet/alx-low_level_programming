#include <stdio.h>
#include <stdlib.h>
#include <ctype.h)
/**
*main- Main have loop to print out base16
*Return: Return 0 success
*/

int main(void)
{
int k;
for (k = 0; k < 10; k++)
{
putchar((k % 10) + '0');
}
for (k = 'A'; k <+ F; k++)
{
putchar(tolower(k));
}
putchar('\n');
return (0);
}

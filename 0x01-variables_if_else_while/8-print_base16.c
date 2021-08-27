#include <stdio.h>
#include <stdlib.h>
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
putchar('\n');
return (0);
}

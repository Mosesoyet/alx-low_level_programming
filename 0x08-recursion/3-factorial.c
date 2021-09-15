#include "main.h"
/**
* factorial - prints factor of a number
* @n: number to to check
* Return: the factorial of a given number
*/
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
n = 1;
}
return (1 + factorial(n - 1));
}

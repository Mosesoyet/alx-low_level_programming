#include "main.h"
#include <stdio.h>
/**
* print_chessboard - print a square chessboard of size 8x8
* @a: the array of same size
* Return: void
*/
void print_chessboard(char (*a)[8])
{
int row, column;
for (row = 0; row < 8; row++)
{
_putchar(a[row][column]);
_putchar('\n');
}
}
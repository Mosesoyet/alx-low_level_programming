#include <stdio.h>
/**
 *Main should always return data size
 *printf is needed and return success
*/
int main(void){
  printf("Size of char is: %d byte(s)\n", sizeof(char));
  printf("Size of int is: %d byte(s)\n", sizeof(int));
  printf("Size of long int is: %d byte(s)\n", sizeof(long int));
  printf("Size of lon long int is: %d byte(s)\n" sizeof(long long int));
  printf("Size of float is: %d byte(s)\n", sizeof(float));
  return 0;
}

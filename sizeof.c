/* to measure the sizes of short
int, long int, and long double
on your machine */

#include <stdio.h>

int main(void)
{
  short int x;
  long int y;
  long double z;

  printf("%lu\n", sizeof(x));
  printf("%lu\n", sizeof(y));
  printf("%lu\n", sizeof(z));
}

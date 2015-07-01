/* to measure the sizes of short
int, long int, and long double
on your machine */

#include <stdio.h>

int main(void)
{
  printf("%lu\n", sizeof(short int));
  printf("%lu\n", sizeof(long int));
  printf("%lu\n", sizeof(long double));
}

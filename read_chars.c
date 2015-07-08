/* program that keeps reading characters from the
standard input until the character q is entered */

#include <stdio.h>

int main(void)
{
  int c;
  printf("Enter a character\nEnter q to exit\n");
  while((c = getc(stdin)) != 'q')
  {

  }
  printf("Bye\n");
  return 0;
}

/* to calculate its sine and tangent
values of 30 degrees */

#include <stdio.h>
#include <math.h>

int main(void)
{
  float x = 30.0;
  float radians = 3.14 * x / 180;

  printf("%f\n", sin(radians));
  printf("%f\n", tan(radians));
}

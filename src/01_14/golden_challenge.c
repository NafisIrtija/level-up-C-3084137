#include <stdio.h>

double golden(double val, int precision)
{
  if(precision)
    return (val + 1/golden(val, precision -1));
  return val;
}

int main()
{
  float gval = golden(1.0, 9);
  printf("%lf",gval);
  return 0;
}
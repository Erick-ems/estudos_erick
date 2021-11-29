#include <stdio.h>

int main()
{
  double varA, varB, varC, median;
  scanf("%lf%lf%lf", &varA,&varB,&varC);
  median = (2 * varA + 3 * varB + 5 * varC) / 10;
  printf("MEDIA = %.1lf\n", median);
  return 0;
}
#include <stdio.h>
int main()
{
  double R, n, area;
  scanf("%lf", &R);
  n = 3.14159;
  area = n * R*R;
  printf("A=%.4lf\n", area);
  return 0;
}
#include <stdio.h>
#include <math.h>

int main()
{
  double px1, py1, px2, py2, total, total1;

  scanf("%lf%lf%lf%lf", &px1, &py1, &px2, &py2);

  total = ((px2 - px1) * (px2 - px1) ) + ((py2 - py1) * (py2 - py1));
  total1 = sqrt(total);

  printf("%.4lf\n", total1);

  return 0;

}
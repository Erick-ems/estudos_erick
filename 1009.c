#include <stdio.h>

int main()
{
  char nome[61];
  scanf("%s", nome);

  double sal, sell, total;
  scanf("%lf%lf", &sal, &sell);

  total = sal + sell * 0.15;

  printf("TOTAL = R$ %.2lf\n", total);

  return 0;

}
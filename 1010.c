#include <stdio.h>

int main()
{
  int cd1, cd2, num1, num2;
  float val1, val2, total;

  scanf("%d%d%f", &cd1, &num1, &val1);
  scanf("%d%d%f", &cd2, &num2, &val2);

  total = (num1 * val1) + (num2 * val2);

  printf("VALOR A PAGAR: R$ %.2f\n", total);

  return 0;
}
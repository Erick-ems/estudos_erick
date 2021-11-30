#include <stdio.h>

int main()
{
  float varH, varV, total; 

  scanf("%f%f", &varH, &varV);

  total = (varH * varV) / 12;

  printf("%.3f\n", total);

  return 0; 
}
#include <stdio.h>

int main()
{
  float varA, varB, median;
  
  scanf("%f", &varA);

  scanf("%f", &varB);

  median = ((varA * 3.5) + (varB * 7.5)) / 11;
  printf("MEDIA = %.5f\n", median);
  return 0;
}
#include <stdio.h>

int main()
{
  int varA, varH, varM;

  scanf("%d", &varA);

  varH = varA / 3600;
  varA -= varH * 3600;
  varM = varA / 60;
  varA -= varM * 60;

  printf("%d:%d:%d\n", varH, varM, varA);

  return 0;
}
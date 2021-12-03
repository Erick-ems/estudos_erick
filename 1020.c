#include <stdio.h>

int main()
{
  int A, D, M;

  scanf("%d", &D);

  A = D / 365;
  D -= A*365;
  M  = D / 30;
  D -= M*30;

  printf("%d ano(s)\n", A);
  printf("%d mes(es)\n", M);
  printf("%d dia(s)\n", D);

  return 0;
}
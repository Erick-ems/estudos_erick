#include <stdio.h>

int main()
{
  double n, d[] = {100.00, 50.00, 20.00, 10.00, 5.00, 2.00, 1.00, 0.50, 0.25, 0.10, 0.5, 0.01};

  int contarMoeda = 0;

  scanf("%lf", &n);

  printf("NOTAS:\n");

  int contadorPosicao = 0;

  n+=1e-9;

  while(d[contadorPosicao] >= 0.01)

  {
      contarMoeda = 0;

      while(n >= d[contadorPosicao])
      {
        n -= d[contadorPosicao];
        contarMoeda++;
      }
      if(d[contadorPosicao] == 1.0)
      {
        printf("MOEDAS\n");
      }
      if(d[contadorPosicao] >= 2.00 )
      {
        printf("%d nota(s) R$ %2.lf\n", contarMoeda,d[contadorPosicao]);
      }
      else
      {
        printf("%d moeda(s) R$ %.2lf\n", contarMoeda, d[contadorPosicao]);
      }
      contadorPosicao++;
  }

  return 0;
}

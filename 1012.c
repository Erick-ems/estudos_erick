#include <stdio.h>

int main()
{
  double varA, varB, varC, area_triangule;
  double area_circule, area_trapeze, area_square, area_rectangle;

  scanf("%lf%lf%lf", &varA, &varB, &varC);

  area_triangule = (varA * varC) / 2;
  area_circule = 3.14159 * varC * varC;
  area_trapeze = ((varA + varB) * varC) / 2;
  area_square = varB * varB;
  area_rectangle = varA * varB;

  printf("TRIANGULO: %.3lf\n", area_triangule);
  printf("CIRCULO: %.3lf\n", area_circule);
  printf("TRAPEZIO: %.3lf\n", area_trapeze);
  printf("QUADRADO: %.3lf\n", area_square);
  printf("RETANGULO: %.3lf\n", area_rectangle);

  return 0;
}
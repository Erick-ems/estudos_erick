#include <stdio.h>

int main()
{
  int value, n100, n50, n20, n10, n5, n2, n1;
  int n101, n51, n21, n11, n05, n02, n01;
  int n102, n52, n22, n12, n005, n002, n001;

  scanf("%d", &value);

  n100 = value / 100;
  n101 = n100 * 100;
  n102 = value - n101;

  n50 = n102 / 50;
  n51 = n50 * 50;
  n52 = n102 - n51;

  n20 = n52 / 20;
  n21 = n20 * 20;
  n22 = n52 - n21;

  n10 = n22 / 10;
  n11 = n10 * 10;
  n12 = n22 - n11;

  n5 = n12 / 5; 
  n05 = n5 * 5;
  n005 = n12 - n05;

  n2 = n005 / 2;
  n02 = n2 * 2;
  n002 = n005 - n02;

  n1 = n002 / 1;
  n01 = n1 * 1;
  n001 = n002 - n01;

  printf("%d nota(s) de R$ 100,00\n", n100);
  printf("%d nota(s) de R$ 50,00\n", n50);
  printf("%d nota(s) de R$ 20,00\n", n20);
  printf("%d nota(s) de R$ 10,00\n", n10);
  printf("%d nota(s) de R$ 5,00\n", n5);
  printf("%d nota(s) de R$ 2,00\n", n2);
  printf("%d nota(s) de R$ 1,00\n", n1);

  return 0;
  
}
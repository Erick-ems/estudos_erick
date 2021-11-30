#include <stdio.h>

int main()
{
  double ray, volume;

  scanf("%lf", &ray);

  volume = (4/3.0) * 3.14159 * ray * ray * ray;

  printf("VOLUME = %.3lf\n", volume);

  return 0;

}
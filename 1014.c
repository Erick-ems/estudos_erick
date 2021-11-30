#include <stdio.h>

int main()

{
	int distA;
	float consA, total;
	
	scanf("%d%f", &distA, &consA);
	
	total = distA / consA;
	
	printf("%.3f km/l\n", total);
	
	return 0;
	
}
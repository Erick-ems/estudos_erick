#include <stdio.h>

int main()
{
	int nf1, htf1;
	
	scanf("%d%d", &nf1, &htf1);
	
	float sal, salario;
	
	scanf("%f", &sal);
	
	salario = htf1 * sal; 
	
	printf("NUMBER = %d\n", nf1);
	
	printf("SALARY = U$ %.2f\n", salario);
	
	return 0;
	
}
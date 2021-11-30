#include <stdio.h>
#include <stdlib.h>

int main()
{
	int varA, varB, varC, maiorAB;
	
	scanf("%d%d%d", &varA, &varB, &varC);
	
	maiorAB = (varA + varB + abs(varA - varB) ) / 2;
	
	if(maiorAB < varC)
	{
		printf("%d eh o maior\n", varC);
	}
	else
	{
		printf("%d eh o maior\n",maiorAB);
	}
	
	return 0;
}
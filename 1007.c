#include <stdio.h>

int main()
{
    int varA, varB, varC, varD, D;
    
    scanf("%d%d%d%d", &varA, &varB, &varC, &varD);
    
    D = (varA * varB - varC *varD);
    
    printf("DIFERENCA = %d\n", D);
    
    return 0;
}
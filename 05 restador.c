//Luis Fernando De la Rosa Lorenzo//
//12 de Octubre 2020 restador//
#include<stdio.h>
int main()
{
    int rest;
    int n;
    printf("en donde empieza la resta:\n");
    scanf("%d",&rest);
    printf("dame el valor de n:\n");
    scanf("%d",&n);

    while(rest>=n)
    {
        printf("%d",rest);
        rest=rest-2;
    }
    printf("\nfin del ciclo\n");
    return 0;
}



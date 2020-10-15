#include<stdio.h>
int main()
{
    int rest;
    int i;
    int n;
    char opc='s';

    while(opc=='s')
    {
    printf("dame el valor de n:\n");
    scanf("%d",&n);
    i=n*2+1;
    rest=3*n+2*i;

    while(rest>=3*n)
    {
        printf("%d",rest);
        rest=rest-2;
    }
    printf("\nQuieres realizar otra operacion s(si)/n(no)");
    scanf("%s",&opc);
    }

    printf("\nfin del ciclo\n");
    return 0;
}

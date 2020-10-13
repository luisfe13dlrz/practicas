#include<stdio.h>
int main()
{
    int rest;
    int i;
    int n;
    printf("dame el valor de n:\n");
    scanf("%d",&n);
    i=11;
    rest=3*n+2*i;

    while(rest>=3*n)
    {
        printf("%d",rest);
        rest=rest-2;
    }
    printf("\nfin del ciclo\n");
    return 0;
}

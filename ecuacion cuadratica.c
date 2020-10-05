// 02/10/2020
// Luis Fernando De la Rosa Lorenzo
#include<stdint.h>
int main()
{
    float a,b,c,D;

    printf("Luis Fernando de la Rosa Lorenzo\n");
    printf("..........ECUACION CUADRATICA DE SEGUNDO GRADO..........\n");
    printf("Dame el valor de  a:\n");
    scanf("%f",&a);
    printf("Dame el valor de b:\n");
    scanf("%f",&b);
    printf("Dame el valor de c.\n");
    scanf("%f",&c);

    D=b*b-(4*a*c);

    if(D==0)
      printf("x:%.f\n",(-b/(2*a)));

    else if(D>0)
    {
       printf(" x1: %.3f\n",(-b+sqrt(D))/(2*a));
       printf(" x2: %.3f\n",(-b-sqrt(D))/(2*a));
    }
    else
    {
        /*D<0*/
        printf("x1: %.3f+%.3f i\n",-b/(2*a),(sqrt(-D))/(2*a));
        printf("x2: %.3f-%.3f i\n",-b/(2*a),(sqrt(-D))/(2*a));
    }

    return 0;

}

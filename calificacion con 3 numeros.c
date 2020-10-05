// 02/10/2020
// Luis Fernando De la Rosa Lorenzo
#include<stdio.h>
int main()
{
   char C1;
   char C2;
   char C3;
   int C01,C02,C03,S;
   float CT;

   printf("dame la calificacion 1 C1:\n");
   scanf("%c",&C1);
   printf("dame la calificacion 2 C2:\n");
   fflush(stdin);
   scanf("%c",&C2);
   printf("dame la calificacion 3 C3:\n");
   fflush(stdin);
   scanf("%c",&C3);


    if(C1=='A'||C1=='a')

    {
        C01=10;
    }

    else if(C1=='B'||C1=='b')

    {
        C01=9;
    }

    else if(C1=='C'||C1=='c')

    {
        C01=8;
    }

    else

    {
        C01=0;
    }

    if(C2=='A'||C2=='a')

    {
        C02=10;
    }

    else if(C2=='B'||C2=='b')

    {
        C02=9;
    }

    else if(C2=='C'||C2=='c')

    {
        C02=8;
    }

    else
    {
        C02=0;
    }


    if(C3=='A'||C3=='a')

        C03=10;

    else if(C3=='B'||C3=='b')

    {
        C03=9;
    }

    else if(C3=='C'||C3=='c')
    {
        C03=8;
    }
    else

    {
        C03=0;
    }

S=C01+C02+C03;
CT=S/3;

    printf(" el promedio final es: %.2f",CT);

    return 0;

}

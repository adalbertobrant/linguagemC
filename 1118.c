#include <stdio.h>
#include <stdlib.h>

int main(void){

    int X;
    double nota_1,nota_2;

    do{
       do{
        scanf("%lf",&nota_1);
        if(nota_1 > 10.000001 || nota_1 < -0.000001)
            printf("nota invalida\n");
        }while(nota_1 > 10.000001 || nota_1 < -0.000001);

        do{
         scanf("%lf",&nota_2);
         if(nota_2 > 10.000001 || nota_2 < -0.000001)
            printf("nota invalida\n");
        }while(nota_2 > 10.000001 || nota_2 < -0.000001);

    printf("media = %.2lf\n",(nota_1+nota_2)/2);

    do{
        printf("novo calculo (1-sim 2-nao)\n");

        scanf("%d",&X);
    }while(X !=1 && X != 2);

    }while(X != 2);

    return 0;
}



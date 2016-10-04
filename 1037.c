#include<stdio.h>

int main(){

    double valor_qualquer;
    scanf("%lf",&valor_qualquer);
    if (0 > valor_qualquer || valor_qualquer > 100)
        printf("Fora de intervalo\n");
    else if ((valor_qualquer >= 0) &&(valor_qualquer <= 25.00))
        printf("Intervalo [0,25]\n");
    else if (25 < valor_qualquer && valor_qualquer <= 50.00)
        printf("Intervalo (25,50]\n");
    else if (50 < valor_qualquer && valor_qualquer <= 75)
        printf("Intervalo (50,75]\n");
    else if (75 < valor_qualquer && valor_qualquer <= 100)
        printf("Intervalo (75,100]\n");


    return 0;}


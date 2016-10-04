#include<stdio.h>

int main(void){


    double lisarb,imposto,faixa;

    scanf("%lf",&lisarb);

    if (lisarb <=2000.00){
        printf("Isento\n");}

    faixa = lisarb -2000.00;

    if (lisarb>=2000.01 && lisarb<=3000.00){
        imposto = faixa*8/100.0;
        printf("R$ %.2lf\n",imposto);
    }
    else if (lisarb>=3000.01 && lisarb<=4500.00){
        imposto = 80.00 + (faixa -1000)*18/100.00;
        printf("R$ %.2lf\n",imposto);
    }
    else if (lisarb>4500.00){
        imposto = 80.00 + 270.00 +(faixa-2500)*28/100.00;
        printf("R$ %.2lf\n",imposto);
    }


    return 0;}

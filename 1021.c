#include<stdio.h>

int main(){

    double valor_Pflutuante,aux_cents;
    int aux,aux_centavos;
    scanf("%lf",&valor_Pflutuante);
    aux = (int)(valor_Pflutuante);
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",aux/100);
    printf("%d nota(s) de R$ 50.00\n",(aux%100)/50);
    printf("%d nota(s) de R$ 20.00\n",((aux%100)%50)/20);
    printf("%d nota(s) de R$ 10.00\n",(((aux%100)%50)%20)/10);
    printf("%d nota(s) de R$ 5.00\n",((((aux%100)%50)%20)%10)/5);
    printf("%d nota(s) de R$ 2.00\n",(((((aux%100)%50)%20)%10)%5)/2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",(((((aux%100)%50)%20)%10)%5)%2);
    aux_cents = valor_Pflutuante - aux;
    aux_centavos = (aux_cents)*100;
    printf("%d moeda(s) de R$ 0.50\n",aux_centavos/50);
    printf("%d moeda(s) de R$ 0.25\n",(aux_centavos%50)/25);
    printf("%d moeda(s) de R$ 0.10\n",((aux_centavos%50)%25)/10);
    printf("%d moeda(s) de R$ 0.05\n",(((aux_centavos%50)%25)%10)/5);
    printf("%d moeda(s) de R$ 0.01\n",(((aux_centavos%50)%25)%10)%5);

    return 0;}

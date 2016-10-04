#include<stdio.h>

int main(){

    int valor_A,valor_B,valor_C,valor_D;
    scanf("%d%d%d%d",&valor_A,&valor_B,&valor_C,&valor_D);
    if ((valor_B > valor_C && valor_D > valor_A) && (valor_C + valor_D > valor_A + valor_B) && (valor_C > 0 && valor_D > 0) && (valor_A%2 == 0))
        printf("Valores aceitos\n");
    else
        printf("Valores nao aceitos\n");

    return 0;}

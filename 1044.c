#include<stdio.h>

int main(){

    int valor_A,valor_B;
    scanf("%d%d",&valor_A,&valor_B);
    if (valor_A%valor_B==0 || valor_B%valor_A==0)
        printf("Sao Multiplos\n");
    else{
        printf("Nao sao Multiplos\n");
    }
    return 0;}

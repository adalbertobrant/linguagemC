#include<stdio.h>

int main(void){

    int i,aux=0;
    float valores[6],media=0;
    for (i=0;i<6;i++){
        scanf("%f",&valores[i]);
        if(valores[i]>0){
            aux++;
            media = valores[i] + media;
    }}
    printf("%d valores positivos\n",aux);
    printf("%.1f\n",media/aux);
    return 0;
    }

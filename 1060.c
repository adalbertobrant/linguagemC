#include<stdio.h>

int main(void){

    double valores[6];
    int i,count=0;

    for (i=0;i<6;i++){
        scanf("%lf",&valores[i]);
        if(valores[i]>0){
            count++;
        }
    }
    printf("%d valores positivos\n",count);

    return 0;}

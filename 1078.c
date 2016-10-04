#include<stdio.h>

int main(void){

    int tabuada_N,i;
    scanf("%d",&tabuada_N);
    if (tabuada_N>=2 && tabuada_N<=1000){
        for(i=1;i<=10;i++){
            printf("%d x %d = %d\n",i,tabuada_N,i*tabuada_N);
        }
    }
    return 0;
    }

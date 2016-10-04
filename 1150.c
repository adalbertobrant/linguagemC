#include <stdio.h>
#include <stdlib.h>

int main(void){


    int X,Z,i,soma=0,count=0;
    scanf("%d%d",&X,&Z);
    while(Z<=X){
        scanf("%d",&Z);
    }
    for(i=0;i<=Z;i++){
        soma=soma+i+X;
        count++;
        if(soma>Z){
            printf("%d\n",count);
           return 0;
        }
    }
    return 0;
    }


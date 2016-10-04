#include <stdio.h>
#include <stdlib.h>

int main(void){

    int X,Y,soma=0,i,aux;

    scanf("%d%d",&X,&Y);

    if(X>Y){
        aux=X;
        X=Y;
        Y=aux;
    }
    aux=0;
    for(i=X;i<=Y;i++){
        if (i % 13 != 0){
            soma = soma + i;
        }
    }
    printf("%d\n",soma);

    return 0;
    }

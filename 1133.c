#include <stdio.h>
#include <stdlib.h>

int main(void){

    int X,Y,i,aux;

    scanf("%d%d",&X,&Y);

    if(X>Y){
        aux=X;
        X=Y;
        Y=aux;
    }
    aux=0;
    for(i=X;i<Y;i++){
        if (i !=X && i%5==2 || i%5==3){
            printf("%d\n",i);
        }
    }


    return 0;
    }

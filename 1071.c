#include<stdio.h>

int main(void){

    int X,Y,i=0,soma=0,aux;
    scanf("%d%d",&X,&Y);
    if (X>Y){
        aux=X;
        X=Y;
        Y=aux;
        for(i=X+1;i<Y;i++){
            if(i%2!=0){
                soma =soma+i;
            }
        }
    }
   else{
         for(i=X+1;i<Y;i++){
            if(i%2!=0){
                soma =soma+i;
            }
    }
    }
    printf("%d\n",soma);
    return 0;
    }

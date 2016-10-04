#include <stdio.h>

int main(void){

    int X,aux,soma=0,Y=5;

    do{
        scanf("%d",&X);
        aux=X;
        if(aux==0)
            return 0;
        if(X%2==0){
            while(Y>0){
                soma=soma+X;
                X=X+2;
                Y--;
            }
            printf("%d\n",soma);
            soma=0;
            Y=5;
        }

        else{
            X=X+1;
            while(Y>0){
                soma=soma+X;
                X=X+2;
                Y--;
            }
            printf("%d\n",soma);
            soma=0;
            Y=5;
        }

    }while(aux!=0);
    return 0;
    }


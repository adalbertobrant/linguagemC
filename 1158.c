#include <stdio.h>

int main(void){

    int N,X,Y,i,soma=0;
    scanf("%d",&N);
    while(N>0){
        scanf("%d%d",&X,&Y);
        if(X%2!=0){
            while(Y>0){
                soma=soma+X;
                X=X+2;
                Y--;
            }
            printf("%d\n",soma);
            soma=0;
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
      }
        N--;
    }
    return 0;
    }

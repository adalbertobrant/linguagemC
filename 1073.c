#include<stdio.h>


int main(void){

    int N,i,par=0,impar=0;
    scanf("%d",&N);
    if (N%2==0 && N!=0 && N!=3 && N!=1 && N!=2 && N!=4 && N!=5 && N<2000){
        for(i=0;i<=N;i++){
            if(i%2==0 && i!=0){
                par = i*i;
                printf("%d^2 = %d\n",i,par);

            }
        }
    }
    else{
        for(i=0;i<N;i++){
            if(i%2==0 && i!=0){
                impar = i*i;
                printf("%d^2 = %d\n",i,impar);
    }
        }
    }


    return 0;
    }

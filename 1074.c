#include<stdio.h>

int main(void){

    int N,X,i;
    scanf("%d",&N);
    if (N<10000){
        for (i=0;i<N;i++){
            scanf("%d",&X);
            if (X>0 && X%2==0)
                printf("EVEN POSITIVE\n");
            if (X>0 && X%2!=0)
                printf("ODD POSITIVE\n");
            if (X==0)
                printf("NULL\n");
            if (X<0 && X%2==0)
                printf("EVEN NEGATIVE\n");
            if (X<0 && X%2!=0)
                 printf("ODD NEGATIVE\n");
        }
    }
    return 0;
    }

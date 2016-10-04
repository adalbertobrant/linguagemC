#include <stdio.h>
#include <stdlib.h>

int main(void){

    int X=1,i;
    do{
        scanf("%d",&X);
        for(i=1;i<=X;i++){
            if(i==X)
                printf("%d\n",i);
            else{
                printf("%d ",i);
            }
        }
    }while(X!=0);
    return 0;
    }

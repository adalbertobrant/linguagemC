#include<stdio.h>

int main(void){

    int N,X,count_in=0,count_out=0,i;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&X);
        if(X>=10&&X<=20){
            count_in++;
        }
        else{
            count_out++;
        }
    }
    printf("%d in\n",count_in);
    printf("%d out\n",count_out);
    return 0;
    }

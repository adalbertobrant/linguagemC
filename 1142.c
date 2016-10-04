#include <stdio.h>

int main(void){

    int N,i;

    scanf("%d",&N);

    for (i=1;i<=N*4;i++){
       if(i%4!=0)
       printf("%d ",i);
        if(i%4==0)
        printf("PUM\n");

    }

    return 0;
    }

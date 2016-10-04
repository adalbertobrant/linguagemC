#include <stdio.h>
#include <stdlib.h>

int main(void){

    int N,i,fatorial=1;
    scanf("%d",&N);
    for(i=N;i>=1;i--){
        fatorial = fatorial*i;
    }
    printf("%d\n",fatorial);
    return 0;
    }

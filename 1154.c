#include <stdio.h>
#include <stdlib.h>

int main(void){

    int idade,count=0;
    float media=0;
    do{
        scanf("%d",&idade);
        if(idade>=0){
        count++;
        media = (media +(float)idade);
        }

    }while(idade>=0);

    printf("%.2f\n",media/(float)count);
    return 0;
    }

#include<stdio.h>

int main(void){

    int i=1,j=7;
    while(i<=9 && j<=7 && j>=5){
    printf("I=%d J=%d\n",i,j);
    j--;
    if (j<5){
       //j=j+3;
        i=i+2;
     }
    }
    return 0;
    }

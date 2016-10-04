#include <stdio.h>

int main(void){

    int i=1,j=7,count;
    while (i<=9){
        printf("I=%d J=%d\n",i,j);
        j--;
        count=j-i;
        if(count<4){
            i=i+2;
            j=j+5;
        }
    }
    return 0;
    }

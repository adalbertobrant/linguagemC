#include <stdio.h>
#include <stdlib.h>


int main(void){

    int i,j=1;
    double S=1;
    for(i=1;i<=39;i++){
        if(i%2!=0&&i>1){
            j=j*2;
            S=S + (double)i/(double)j;
        }
    }
    printf("%.2lf\n",S);
    return 0;
    }

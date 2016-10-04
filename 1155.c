#include <stdio.h>
#include <stdlib.h>

int main(void){

    int i;
    double S=0;
    for(i=1;i<=100;i++){
        S=S+(double)1/(double)i;
    }
    printf("%.2lf\n",S);
    return 0;
    }

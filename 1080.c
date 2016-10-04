#include<stdio.h>

int main(void){

    int Valor,i=1,maior=0,posix=0;
    while(i<=100){
    scanf("%d",&Valor);
    if(Valor>maior){
        maior=Valor;
        posix=i;
    }
    i++;
    }
    printf("%d\n%d\n",maior,posix);
    return 0;
    }

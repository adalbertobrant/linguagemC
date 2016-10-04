#include <stdio.h>
#include <stdlib.h>

int main(void){

    int N_par_numeros,i,primeiro_numero,segundo_numero;
    double divisao;

    scanf("%d",&N_par_numeros);
    for (i=0;i<N_par_numeros;i++){
        scanf("%d%d",&primeiro_numero,&segundo_numero);
        if(segundo_numero==0){
            printf("divisao impossivel\n");}
        else{
        divisao = (double)primeiro_numero /  segundo_numero;
        printf("%.1lf\n",divisao);
    }
    }
    return 0;
    }

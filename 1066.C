#include<stdio.h>
#include<math.h>

int main(void){

    double valores[5];
    int i,pares=0,impares=0,positivo=0,negativo=0;
    for(i=0;i<5;i++){
        scanf("%lf",&valores[i]);
    }
    for(i=0;i<5;i++){
         if(fabs(fmod(valores[i],2.0))==0.0)
            pares++;
        if(fabs(fmod(valores[i],2.0))!=0.0)
            impares++;
        if (valores[i]>0)
            positivo++;
        if (valores[i]<0)
            negativo++;
    }
    printf("%d valor(es) par(es)\n",pares);
    printf("%d valor(es) impar(es)\n",impares);
    printf("%d valor(es) positivo(s)\n",positivo);
    printf("%d valor(es) negativo(s)\n",negativo);
    return 0;
    }

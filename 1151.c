#include <stdio.h>
#include <stdlib.h>

int main(void){

   int N,i,penultimo=1,antepenultimo=0,soma;
   scanf("%d",&N);
   printf("%d %d ",antepenultimo,penultimo);
   soma = penultimo + antepenultimo;
   for (i=0;i<N;i++){
    if(i==0 || i==1);
    else{
    if(i==N-1){
        printf("%d\n",soma);
        return 0;
    }
        printf("%d ",soma);
        antepenultimo = penultimo;
        penultimo = soma;
        soma = antepenultimo + penultimo;

    }
   }

    return 0;
    }




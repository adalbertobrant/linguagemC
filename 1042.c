#include<stdio.h>

int main(){

    int valor[3],copia[3],i,j,aux=0;
    for (i=0;i<3;i++){
        scanf("%d",&valor[i]);
        copia[i]=valor[i];
        }
    for (i=0;i<3;i++){
        for (j=i+1;j<3;j++){
            if(valor[i]>valor[j]){
                aux=valor[i];
                valor[i]=valor[j];
                valor[j]=aux;
            }
           }
           }
    for(i=0;i<3;i++){
        printf("%d\n",valor[i]);
    }
    printf("\n");
    for (i=0;i<3;i++){
        printf("%d\n",copia[i]);
    }
    return 0;}

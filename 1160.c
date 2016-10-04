#include <stdio.h>

int main(void){

    int T_numero_casos_teste,Pop_A,Pop_B,i=0;
    double GA,GB;

    scanf("%d",&T_numero_casos_teste);
    while(T_numero_casos_teste>0){
        scanf("%d%d",&Pop_A,&Pop_B);
        scanf("%lf%lf",&GA,&GB);
        i=0;
        while(Pop_A<=Pop_B && i<=100){
            Pop_A=Pop_A+Pop_A*(GA/100);
            Pop_B=Pop_B+Pop_B*(GB/100);
            i=i+1;
        }
         if(i>100)
            printf("Mais de 1 seculo.\n");
        else{
            printf("%d anos.\n",i);
        }

    T_numero_casos_teste--;
    }
    return 0;
    }


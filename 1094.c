#include<stdio.h>

#define porcento 100


int main(void){

    int quantidade=0,total=0, i=0,coelho=0,sapo=0,rato=0, casos_teste;
    double percentual_coelhos,percentual_ratos,percentual_sapos;
    char tipo;

    scanf("%d",&casos_teste);
    fflush(stdin);

    for (i=0;i<casos_teste;i++){
         scanf("%d %c",&quantidade,&tipo);
         total = total + quantidade;
        if (tipo=='C' || tipo=='c')
            coelho = coelho + quantidade;
        if (tipo=='R'|| tipo=='r')
            rato = rato + quantidade;
        if (tipo=='S'||tipo=='s')
            sapo = sapo + quantidade;
    }

    percentual_coelhos = porcento *( (double)coelho/(double)total);

    percentual_ratos = porcento * ( (double)rato/(double)total);

    percentual_sapos = porcento * ( (double)sapo/(double)total);

    printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n",total,coelho,rato,sapo);

    printf("Percentual de coelhos: %.2lf %%\nPercentual de ratos: %.2lf %%\nPercentual de sapos: %.2lf %%\n",percentual_coelhos,percentual_ratos,percentual_sapos);

    return 0;
    }

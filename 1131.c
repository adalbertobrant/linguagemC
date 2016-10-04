#include <stdio.h>
#include <stdlib.h>

int main(void){

    int gremio, inter, resposta_sim_nao=0, empates=0 ,qtd_grenais=0, vitoria_inter=0, vitoria_gremio=0;

    do{
        scanf("%d%d",&inter,&gremio);

        if(inter>gremio)
            vitoria_inter++;
        else if(gremio>inter)
            vitoria_gremio++;
        else if(inter==gremio)
            empates++;

        qtd_grenais++;

        printf("Novo grenal (1-sim 2-nao)\n");

        scanf("%d",&resposta_sim_nao);


    }while(resposta_sim_nao == 1);

    printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n",qtd_grenais,vitoria_inter,vitoria_gremio,empates);
    if(vitoria_inter>vitoria_gremio)
        printf("Inter venceu mais\n");
    else if(vitoria_gremio>vitoria_inter)
        printf("Gremio venceu mais\n");
    else if (vitoria_inter==vitoria_gremio)
        printf("Nao houve vencedor\n");

    return 0;
    }

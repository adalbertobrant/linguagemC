#include <stdio.h>
#include <stdlib.h>

    int main(void){
        int senha;

        do{
            scanf("%d",&senha);

            if (senha != 2002){
                printf("Senha Invalida\n");
            }
            else if (senha == 2002){
                printf("Acesso Permitido\n");
            }

            }while(senha != 2002);



        return 0;
        }

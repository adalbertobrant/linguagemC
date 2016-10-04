#include <stdio.h>
#include <stdlib.h>

    int main(void){

        int coordenada_X, coordenada_Y;
        do{
            scanf("%d%d",&coordenada_X,&coordenada_Y);
            if (coordenada_X * coordenada_Y > 0 && coordenada_X > 0){
                printf("primeiro\n");
            }
            else if (coordenada_X * coordenada_Y > 0 && coordenada_X < 0){
                printf("terceiro\n");
            }
            else if (coordenada_X < 0 && coordenada_Y > 0){
                printf("segundo\n");
            }
            else if (coordenada_X > 0 && coordenada_Y < 0){
                printf("quarto\n");
            }
        }while(coordenada_X != 0 && coordenada_Y !=0);

        return 0;
        }

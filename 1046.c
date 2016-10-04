#include<stdio.h>

int main(){

    int hora_inicial,hora_final,duracao_jogo;
    scanf("%d%d",&hora_inicial,&hora_final);
    if(hora_inicial==hora_final){
        duracao_jogo = 24;
        printf("O JOGO DUROU %d HORA(S)\n",duracao_jogo);
    }
    if(hora_inicial>hora_final){
        duracao_jogo = (24 - hora_inicial )+ hora_final;
        printf("O JOGO DUROU %d HORA(S)\n",duracao_jogo);
    }
    if(hora_inicial<hora_final){
        duracao_jogo = hora_final -hora_inicial;
        printf("O JOGO DUROU %d HORA(S)\n",duracao_jogo);
    }

    return 0;}

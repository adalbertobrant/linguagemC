#include<stdio.h>

int main(){

    int hora_inicial,minuto_inicial,hora_final,minuto_final,duracao_jogo;

    scanf("%d%d%d%d",&hora_inicial,&minuto_inicial,&hora_final,&minuto_final);

    hora_inicial = hora_inicial*60;
    hora_final = hora_final*60;

    if (hora_final<hora_inicial){
        duracao_jogo = (hora_final+24*60+minuto_final)-(hora_inicial+minuto_inicial);
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",duracao_jogo/60,duracao_jogo%60);
    }
    if (hora_final>hora_inicial){
        duracao_jogo = (hora_final+minuto_final) -(hora_inicial+minuto_inicial);
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",duracao_jogo/60,duracao_jogo%60);
    }
    if(hora_inicial==hora_final && minuto_inicial<minuto_final){
        duracao_jogo = (hora_final+minuto_final)-(hora_inicial+minuto_inicial);
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",duracao_jogo/60,duracao_jogo%60);
    }
    if(hora_final==hora_inicial && minuto_inicial>minuto_final){
        duracao_jogo = (hora_final+24*60+minuto_final)-(hora_inicial+minuto_inicial);
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",duracao_jogo/60,duracao_jogo%60);
    }
    if (hora_final==hora_inicial && minuto_final==minuto_inicial){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }

    return 0;}


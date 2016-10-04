#include<stdio.h>

int main(){

    float ponto_X,ponto_Y;
    scanf("%f%f",&ponto_X,&ponto_Y);
    if(ponto_X==0.0 && ponto_Y==0.0)
        printf("Origem\n");
    if(ponto_X==0 && ponto_Y!=0)
        printf("Eixo Y\n");
    if(ponto_X!=0 && ponto_Y==0)
        printf("Eixo X\n");
    if((ponto_X*ponto_Y>0.0) && (ponto_X >0.0 || ponto_Y>0.0))
        printf("Q1\n");
    if((ponto_X*ponto_Y>0.0) && (ponto_X<0.0 && ponto_Y<0.0))
        printf("Q3\n");
    if((ponto_X*ponto_Y<0.0) && (ponto_X<0.0))
        printf("Q2\n");
    if((ponto_X*ponto_Y<0.0) && (ponto_Y<0.0))
        printf("Q4\n");


    return 0;}

#include<stdio.h>
#include<string.h>

int main(void){


    char palavra_1[20], palavra_2[20],palavra_3[20];

    scanf("%s%s%s",&palavra_1,&palavra_2,&palavra_3);

    if (strcmp(palavra_1,"vertebrado")==0){
             if(strcmp(palavra_2,"mamifero")==0){
            if(strcmp(palavra_3,"onivoro")==0)
                printf("homem\n");
            if(strcmp(palavra_3,"herbivoro")==0)
                printf("vaca\n");
        }
        if(strcmp(palavra_2,"ave")==0){
            if(strcmp(palavra_3,"carnivoro")==0)
                printf("aguia\n");
                 if(strcmp(palavra_3,"onivoro")==0)
                    printf("pomba\n");

        }
    }

    if (strcmp(palavra_1,"invertebrado")==0){
        if(strcmp(palavra_2,"anelideo")==0){
            if(strcmp(palavra_3,"hematofago")==0)
                printf("sanguessuga\n");
             if(strcmp(palavra_3,"onivoro")==0)
                printf("minhoca\n");
        }
        if(strcmp(palavra_2,"inseto")==0){
            if(strcmp(palavra_3,"hematofago")==0)
                printf("pulga\n");
            if(strcmp(palavra_3,"herbivoro")==0)
                printf("lagarta\n");
        }
    }

    return 0;}

#include<stdio.h>

int main(){

    float N1,N2,N3,N4,media,Nota_exame;
    scanf("%f%f%f%f",&N1,&N2,&N3,&N4);
    media = (((N1*2)+(N2*3)+(N3*4)+(N4*1))/(2+3+4+1));
    printf("Media: %.1f\n",media);
    if (media >= 7.0){
        printf("Aluno aprovado.\n");
        return 0;}

     else if (media >=5.0 && media <= 6.9){
        scanf("%f",&Nota_exame);
        printf("Aluno em exame.\n");
        printf("Nota do exame: %.1f\n",Nota_exame);
        }
    if((media + Nota_exame)/2 >= 5.0){
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n",(media + Nota_exame)/2);}
        else {
            printf("Aluno reprovado.\n");      }




    return 0;}

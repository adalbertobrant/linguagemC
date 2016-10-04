#include<stdio.h>

int main(){

    float A,B,C,aux;
    scanf("%f%f%f",&A,&B,&C);
    if(A<=B && A<=C){
        aux=C;
        C=A;
        A=aux;
    }
    if(A>=B && A<=C){
        aux=C;
        C=A;
        A=aux;
    }
    if(A<=B && A>=C){
        aux=B;
        B=A;
        A=aux;
    }
     if(A>=B+C)
        printf("NAO FORMA TRIANGULO\n");
    else{

         if (A*A==B*B+C*C)
            printf("TRIANGULO RETANGULO\n");
         if (A*A>B*B+C*C)
            printf("TRIANGULO OBTUSANGULO\n");
         if (A*A<B*B+C*C)
            printf("TRIANGULO ACUTANGULO\n");
         if (A==B && B==C && A==C)
            printf("TRIANGULO EQUILATERO\n");
         if ((A==B && A!=C)||(A==C && A!=B) || (C==B && A!=C) )
            printf("TRIANGULO ISOSCELES\n");
    }


    return 0;}

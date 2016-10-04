#include<stdio.h>
#include<stdlib.h>

int main(){

    float A,B,C,area_trapezio,perimetro_triangulo;
    scanf("%f%f%f",&A,&B,&C);
    if ((abs(B-C)<A && A<(B+C)) && (abs(A-C)<B && B<(A+C))&& (abs(A-B)<C && C<(A+B))){
        perimetro_triangulo = A+B+C;
        printf("Perimetro = %.1f\n",perimetro_triangulo);}
    else{
        printf("Area = %.1f\n",((A+B)/2)*C);
    }

    return 0;}

#include<stdio.h>

int main(){

    double a,b,c,delta,raiz_1,raiz_2;
    scanf("%lf%lf%lf",&a,&b,&c);
    delta = b*b - (4*a*c);
    raiz_1 = (-b + sqrt(delta))/(2.0*a);
    raiz_2 = (-b - sqrt(delta))/(2.0*a);
    if (a == 0 || delta < 0)
        printf("Impossivel calcular\n");
    else{
        printf("R1 = %.5lf\n",raiz_1);
        printf("R2 = %.5lf\n",raiz_2);
    }
    return 0;}

#include<stdio.h>
#include<math.h>

int main(void){

    double valores[5];
    int i,count=0;
    for(i=0;i<5;i++){
        scanf("%lf",&valores[i]);
        if(fmod(valores[i],2.0)==0.0 || fmod(valores[i],2.0)==-0.0)
            count++;
    }
    printf("%d valores pares\n",count);
    return 0;
}

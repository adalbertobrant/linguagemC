#include<stdio.h>

int main(void){

    int N,i;;
    double real_1,real_2,real_3,*media;
    scanf("%d",&N);
    media = malloc (N*sizeof(double));
    for(i=0;i<N;i++){
        scanf("%lf %lf %lf",&real_1,&real_2,&real_3);
        media[i]=(real_1*2+real_2*3+real_3*5)/10;
    }
    for(i=0;i<N;i++){
        printf("%.1lf\n",media[i]);
    }
    free(media);

    return 0;
    }

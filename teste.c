#include<stdio.h>

int main(void){

    int X,Y;
    scanf("%d%d",&X,&Y);
    system("cls");
    printf("Antes da troca X=%d,Y=%d\n",X,Y);

    X=X+Y;
    Y=X-Y;
    X=X-Y;
    printf("Depois da troca X=%d,Y=%d\n",X,Y);

    return 0;
    }

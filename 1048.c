#include<stdio.h>

int main(void){

    double salario_funcionario,novo;
    int caso;
    scanf("%lf",&salario_funcionario);
    if (salario_funcionario<=400.00)
        caso=1;
    if (salario_funcionario<=800.00 && salario_funcionario>=400.01)
        caso=2;
    if (salario_funcionario<=1200.00 && salario_funcionario>=800.01)
        caso=3;
    if (salario_funcionario<=2000.00 && salario_funcionario>=1200.01)
        caso=4;
    if (salario_funcionario> 2000.00)
        caso=5;
    switch (caso)
    {
    case 1:
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 15 %%\n",novo=salario_funcionario+salario_funcionario*15/100.0,salario_funcionario*15/100.0);
        break;
    case 2:
         printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 12 %%\n",novo=salario_funcionario+salario_funcionario*12/100.0,salario_funcionario*12/100.0);
         break;
    case 3:
         printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 10 %%\n",novo=salario_funcionario+salario_funcionario*10/100.0,salario_funcionario*10/100.0);
         break;
    case 4:
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 7 %%\n",novo=salario_funcionario+salario_funcionario*7/100.0,salario_funcionario*7/100.0);
        break;
    case 5:
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 4 %%\n",novo=salario_funcionario+salario_funcionario*4/100.0,salario_funcionario*4/100.0);
    }

    return 0;}

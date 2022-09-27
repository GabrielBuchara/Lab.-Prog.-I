/*
Elabore um programa que mostre a tabuada de um número A. Mostre a tabela com o
produto de A com n, sendo n inteiro, de modo que 0≤n≤10, isto é:
A x 0 = ??
A x 1 = ??
...
A x 10 = ?


*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //Habilitando pt-BR caracteres
    setlocale (LC_ALL, "Portuguese");
    //Declração de variáveis
    int num, i, res;
    //
    printf("Informe o valor de um número: ");
    scanf("%d",&num);
    //For
    for(i = 0; i <= 10; i++){
        res = num * i;
        printf("\n%d X %d = %d \n",num,i,res);
    }

    return 0;
}

/*

    Elabore um programa que receba do usu�rio dois n�meros. Em
    seguida o usu�rio deve escolher qual opera��o deseja realizar com os dois
    n�meros: Soma, Subtra��o, Multiplica��o ou Divis�o.
    Ao final o programa deve mostra a opera��o realizada entre os dois n�meros e o
    resultado da opera��o.


    Switch-case;
    Entrada: n1, n2
    Sa�da: res


*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //Setando pt-BR
    setlocale (LC_ALL, "Portuguese");
    //Declara��o de vari�veis
    float n1,n2,res;
    int operacao;
    //Mostrar op��es ao usu�rio
    printf("1- Soma \n");
    printf("2- Subtra��o \n");
    printf("3- Multiplica��o \n");
    printf("4- Divis�o \n");
    //Receber o valor da op��o
    printf("\nInforme o valor da opera��o desejada: ");
    scanf("%d",&operacao);
    //Receber valores
    printf("\nInforme um n�mero: ");
    scanf("%f",&n1);
    printf("\nInforme um n�mero: ");
    scanf("%f",&n2);
    //Switch case opera��o
    switch (operacao) {
        case 1:
            res = (n1 + n2);
            printf("\n%.2f + %.2f = %.2f\n",n1,n2,res);
            break;

        case 2:
            res = (n1 - n2);
            printf("\n%.2f - %.2f = %.2f\n",n1,n2,res);
            break;

        case 3:
            res = (n1 * n2);
            printf("\n%.2f * %.2f = %.2f\n",n1,n2,res);
            break;

        case 4:
            res = (n1/n2);
            printf("\n%.2f / %.2f = %.2f\n",n1,n2,res);
            break;

        default:
            printf("\nOp��o inv�lida. Digite novamente.\n");
    }

    return 0;
}

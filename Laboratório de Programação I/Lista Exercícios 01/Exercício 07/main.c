/*

    Elabore um programa que receba do usuário dois números. Em
    seguida o usuário deve escolher qual operação deseja realizar com os dois
    números: Soma, Subtração, Multiplicação ou Divisão.
    Ao final o programa deve mostra a operação realizada entre os dois números e o
    resultado da operação.


    Switch-case;
    Entrada: n1, n2
    Saída: res


*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //Setando pt-BR
    setlocale (LC_ALL, "Portuguese");
    //Declaração de variáveis
    float n1,n2,res;
    int operacao;
    //Mostrar opções ao usuário
    printf("1- Soma \n");
    printf("2- Subtração \n");
    printf("3- Multiplicação \n");
    printf("4- Divisão \n");
    //Receber o valor da opção
    printf("\nInforme o valor da operação desejada: ");
    scanf("%d",&operacao);
    //Receber valores
    printf("\nInforme um número: ");
    scanf("%f",&n1);
    printf("\nInforme um número: ");
    scanf("%f",&n2);
    //Switch case operação
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
            printf("\nOpção inválida. Digite novamente.\n");
    }

    return 0;
}

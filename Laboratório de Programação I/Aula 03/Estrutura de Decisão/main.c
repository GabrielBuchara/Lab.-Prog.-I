/*
        Estrutura de Decisão
        se, senão:

        Se = if() {
        }
        Se não = else {
        }

        Break = para o programa e não continua executando.

*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaração de variáveis
    float a;
    //Mostrando valores
    printf("Informe um numero: ");
    scanf("%f",&a);

    //Verificação se A é MAIOR ou MENOR que 0
    if(a>0)
    {
        printf("\n\tO valor informado sera positivo.\n\n");

    }
    else
    {
        printf("\n\tO valor informado sera negativo.\n\n");
    }

        if (a<0)
    {
        printf("\n\tO valor informado sera negativo.\n\n");
    }

    else
    {
        printf("\n\tO valor informado eh nulo.\n\n");
    }

    return 0;
}

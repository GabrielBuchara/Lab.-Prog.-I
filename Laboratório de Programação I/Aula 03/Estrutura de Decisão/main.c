/*
        Estrutura de Decis�o
        se, sen�o:

        Se = if() {
        }
        Se n�o = else {
        }

        Break = para o programa e n�o continua executando.

*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declara��o de vari�veis
    float a;
    //Mostrando valores
    printf("Informe um numero: ");
    scanf("%f",&a);

    //Verifica��o se A � MAIOR ou MENOR que 0
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

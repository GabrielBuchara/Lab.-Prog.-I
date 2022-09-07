/*
*---------------------------------------------------------------------------------------------------------*                                                                 *
*                                                                                                         *
*                                       Cálculo de Média Ponderada                                        *
*                                                                                                         *
*---------------------------------------------------------------------------------------------------------*                                                                                                         *
*Empresa: Nome da empresa                                                                                 *                        *
*Equipe de programação:                                                                                   *
*Nome do programador 1                                                                                    *
*Nome do programador 1                                                                                    *
*Nome do programador 1                                                                                    *
*Nome do programador 1                                                                                    *
*Data de início: dd/mm/yy                                                                                 *
*Curso: nome do curso                                                                                     *
*---------------------------------------------------------------------------------------------------------*
*Descrição do programa:                                                                                   *
*                Texto de descrição  Texto de descrição  Texto de descrição                               *                                                      *                                                                                     *
*                Texto de descrição  Texto de descrição  Texto de descrição                               *
*                                                                                                         *
*                                                                                                         *
*                                                                                                         *
*Versão: 1.0                                                                                              *
*Data de lançamento da versão: dd/mm/yy                                                                   *




*/



#include <stdio.h>
#include <stdlib.h>

/*
Entrada: 4 notas (float) - input
          4 pesos (float) - input

Saída: 1 média ponderada = (p1*n1) + (p2*n2) + (p3*n3) + (p4*n4)/ (p1 +p2 +p3 +p4)



*/

int main()
{
    //Declaração de variáveis
    float nota1,nota2,nota3,nota4,p1,p2,p3,p4,media_pond;
    //Recebendo valores de notas e pesos
    printf("Informe o valor da sua primeira nota: ");
    scanf("%f",&nota1);
    printf("Informe o peso da sua primeira nota: ");
    scanf("%f",&p1);
    printf("Informe o valor da sua segunda nota: ");
    scanf("%f",&nota2);
    printf("Informe o peso da sua segunda nota: ");
    scanf("%f",&p2);
    printf("Informe o valor da sua terceira nota: ");
    scanf("%f",&nota3);
    printf("Informe o peso da sua terceira nota: ");
    scanf("%f",&p3);
    printf("Informe o valor da sua quarta nota: ");
    scanf("%f",&nota4);
    printf("Informe o peso da sua quarta nota: ");
    scanf("%f",&p4);
    //Cálculo da média ponderada
    media_pond = ((p1*nota1) + (p2*nota2) + (p3*nota3) + (p4*nota4))/(p1+p2+p3+p4);
    //Mostrar valores
    printf("O valor da sua media ponderada sera de: \n",media_pond);


    return 0;
}

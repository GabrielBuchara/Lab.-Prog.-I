/*

Elabore um programa para o c�lculo da m�dia simples
de duas notas obtidas por um aluno nas provas bimestrais (s�o
atribu�dos valores de 0,0 at� 10,0 para as notas de provas). Indique
ainda se o aluno foi aprovado (M�dia maior ou igual a 7,0), se est�
de exame (M�dia maior ou igual a 4,0 e menor que 7,0) ou
reprovado (M�dia menor que 4,0



*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //Setando pt-BR
    setlocale (LC_ALL, "Portuguese");
    //Declara��o de vari�veis
    float n1,n2,med;
    int cont;
    //Receber os valores das notas 1 e 2
    printf("Informe o valor da nota da P1: ");
    scanf("%f",&n1);
    printf("\nInforme o valor da nota da P2: ");
    scanf("%f",&n2);
    //Condi��es de notas < 0 ou > 10
    if (n1 < 0 || n1 > 10){
        printf("\nErro. O nota informada � maior que 10 ou menor que 0. \n");
        return 0;
    }
    if (n2 < 0 || n2 > 10){
        printf("\nErro. O nota informada � maior que 10 ou menor que 0. \n");
        return 0;
    }
    //C�lculo da m�dia
    med = ((n1+n2)/2);
    //Condi��es med >= 7
    if (med >= 7) {
        printf("\nVoc� est� APROVADO! ");
    }
        else if (med >= 4 && med < 7) {
            printf("\nVoc� est� de EXAME! ");
        }
    else {
        printf("\nVoc� foi REPROVADO! ");
    }
    //Mostrar valor da nota
    printf("\nA m�dia ser�: %.2f. \n",med);




    return 0;
}

/*

Elabore um programa para o cálculo da média simples
de duas notas obtidas por um aluno nas provas bimestrais (são
atribuídos valores de 0,0 até 10,0 para as notas de provas). Indique
ainda se o aluno foi aprovado (Média maior ou igual a 7,0), se está
de exame (Média maior ou igual a 4,0 e menor que 7,0) ou
reprovado (Média menor que 4,0



*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //Setando pt-BR
    setlocale (LC_ALL, "Portuguese");
    //Declaração de variáveis
    float n1,n2,med;
    int cont;
    //Receber os valores das notas 1 e 2
    printf("Informe o valor da nota da P1: ");
    scanf("%f",&n1);
    printf("\nInforme o valor da nota da P2: ");
    scanf("%f",&n2);
    //Condições de notas < 0 ou > 10
    if (n1 < 0 || n1 > 10){
        printf("\nErro. O nota informada é maior que 10 ou menor que 0. \n");
        return 0;
    }
    if (n2 < 0 || n2 > 10){
        printf("\nErro. O nota informada é maior que 10 ou menor que 0. \n");
        return 0;
    }
    //Cálculo da média
    med = ((n1+n2)/2);
    //Condições med >= 7
    if (med >= 7) {
        printf("\nVocê está APROVADO! ");
    }
        else if (med >= 4 && med < 7) {
            printf("\nVocê está de EXAME! ");
        }
    else {
        printf("\nVocê foi REPROVADO! ");
    }
    //Mostrar valor da nota
    printf("\nA média será: %.2f. \n",med);




    return 0;
}

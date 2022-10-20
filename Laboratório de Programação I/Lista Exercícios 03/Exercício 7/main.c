/*
Faça um programa que receba as notas de 2 provas de 10 alunos. O programa
deve:
a) Calcular a média de cada aluno. Indicando se o aluno está aprovado, de exame ou reprovado
(Aprovado se média maior ou igual a 7,0. De exame se média maior ou igual a 4 e menor
que 7. Reprovado se média menor que 4.
b) Calcular a nota média da sala em cada prova e a média geral.
c) Indicar quantos alunos estão com nota acima da média.

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int aprovacao_aluno (float media){


    if (media >= 7){
        printf("\nAprovado! ");
    }
        else if (media >= 4 && media < 7){
            printf("\nExame! ");
        }
    else {
        printf("\nReprovado! ");
    }

    return 1;

}



int main () {
    //Habilitando pt-BR
    setlocale (LC_ALL, "Portuguese");
    //Declaração de variáveis
    int i;
    float p1,p2, med[10], medS = 0, medG;
    //Receber os valores das provas
    for (i = 0; i < 10; i++) { 
    printf("Informe o valor da prova 1: ");
    scanf("%f",&p1);
    printf("Informe o valor da prova 2: ");
    scanf("%f",&p2);
    printf("\n");
    }
    //Cálculo da média do aluno
    for (i = 0; i < 10; i++) {
        //Calcular as médias
        med[i] = ((p1+p2)/2);
        printf("\nMédia do aluno %d: %.2f",i+1,med[i]);
        aprovacao_aluno(med[i]);
        //Cálculo da média da sala
        medS = ((medS + med[i])/10);
    }
    //Mostrando a média da sala
    printf("\nMédia da sala: %.2f",medS);
    
    

    













    return 0;
}
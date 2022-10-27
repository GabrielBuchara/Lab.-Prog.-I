/*
==================================================================================
                    Software para Correção de Provas Objetivas
==================================================================================
Empresa: Espartana
Equipe de Programadores:
               Fabrício Razera;
               Gabriel de Oliveira Buchara;
               Gabriel Toshio Hirokawa Higa;
               Pedro Gabriel de Andrade;
               Rafael Vieira Rodrigues.
Curso: Tecnologia em Análise e Desenvolvimento de Sistemas
Data de início do projeto: 27/10/2022
----------------------------------------------------------------------------------
Descrição do Programa:
		O programa têm o objetivo de facilitar a correção de provas objetivas, onde
        o usuário terá que informar o número de questões da prova e seu gabarito.
        Após isso, o programa irá pedir a quantidade de alunos, seu RA e a resposta
        que os alunos responderam. Com o intuito de ser inclusivo, o programa é bem
        dinâmico quanto ao seu uso, além de ser bem interativo com o usuário.

Versão do programa: 1.0
Melhorias da versão: Primeira versão.
Data de lançamento da versão: 15/11/2022
==================================================================================
*/


/*
Elabore um programa para correção de provas objetivas.

Considere que a prova é constituída por n questões, cada questão tem 5 alternativas (“a”, “b”, “c”, “d” e “e”). Inicialmente o professor deve informar o número de questões e o 
gabarito da prova. Em seguida, o professor deve informar o número de alunos, o RA de cada aluno e suas respectivas respostas na prova.

O programa deve retornar uma lista com o RA e nota que cada aluno tirou na prova.

Considere que todas as questões tem o mesmo peso e a nota máxima é 10.

Entradas:
1) Número de questões que constitui a prova (inteiro)
2) Gabarito da prova (Vetor do tipo caracteres)
3) Número de alunos que fizeram a prova (inteiro)
4) Resposta de cada aluno (Vetor do tipo caracteres)

Saída:
Lista com RA dos alunos e suas respectivas notas.

IMPORTANTE: A nota máxima da prova é dez:
Se a prova tem 5 questões e o aluno acertou 5, sua nota é 10,0.
Se a prova tem 5 questões e ele acertou 3, sua nota é 6,0.
Se a prova tem 6 questões e ele acertou 5, sua nota é 8,34.


Para calcular a nota faça:
nota = (número de acertos/número de questões)*10

*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h> //biblioteca caracteres especiais


void instrucoes() {
    //Boas-vindas ao programa
    printf("*******************************************************************************************");
    printf("\nOlá, seja bem vindo(a) ao software de correção de provas!");
    printf("\n\nPrimeiramente, você deve informar o número de questões da prova.");
    printf("\nEm seguida, informar o gabarito de cada uma das questões informadas.\n");
    printf("\nApós informar os valores corretamente, você deverá informar: ");
    printf("\nA quantidade de alunos, o RA correspondente dos alunos e as suas respostas. ");
    printf("\nO programa irá calcular a nota e informar a lista de cada um dos alunos. \n");
    printf("\nOBS: Em caso de utilizar algum separador decimal, por favor, utilizar a VÍRGULA.");

    printf("\n*******************************************************************************************\n");
}


int main () {
    //Habilitando pt-BR
    setlocale (LC_ALL, "Portuguese");
    //Declaração de variáveis
    int qtd_quest, i, qtd_alunos, ra[20], acertos, cont;
    char gab[5], resp[5];
    float *nota;
    //Introdução do programa
    instrucoes();
    //Recebendo o valor das questões da prova
    printf("Informe a quantidade de questões da prova: ");
    scanf("%d",&qtd_quest);
    //Recebendo o valor do gabarito
    for (i = 0; i < qtd_quest; i++){
        printf("Informe o gabarito da questão %d: ",i+1);
        scanf(" %c",&gab[i]);
    }
    //Receber a quantidade de alunos
    printf("Informe a quantidade de alunos: ");
    scanf("%d",&qtd_alunos);
    //Receber o RA dos alunos
    for (i = 0; i < qtd_alunos; i++){
        printf("Informe o RA do %dº aluno: ",i+1);
        scanf("%d",&ra[i]);

        for (i = 0; i < qtd_alunos; i++){
    //Receber as respostas dos alunos
            printf("Informe a resposta da %dº questão: ",i+1);
            scanf("%c",&resp[i]);
            cont = cont + 1;
        }
    }
    //Validando as respostas dos alunos
    for (i = 0; i < qtd_alunos; i++){
        if (resp[i] == gab[i]){
            acertos = acertos + 1;
        }
        else {
            acertos = acertos + 0;
        }
    }
    //Calculando a nota
    nota[i] = ((acertos / qtd_quest)* 10);
    //Mostrar o cálculo da nota
    printf("RA%d: %.2f. \n",ra[i], nota[i]);


    return 0;
}





























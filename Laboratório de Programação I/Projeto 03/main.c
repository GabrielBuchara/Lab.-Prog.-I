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

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> //biblioteca da função tolower()
#include <locale.h> //biblioteca caracteres especiais

void instrucoes();

#include <stdio.h>

int main() {
    //Habilitando pt-BR
    setlocale(LC_ALL, "Portuguese");
    //Declaração de variáveis
    int qtd_a, i, quest, aluno, ra[20], acertos;
    char gabarito[20], resp[20]; 
    float nota; 
    //Função para explicar sobre o programa
    instrucoes();
    //Receber o valor do número de alunos da sala
    printf("Informe o número de alunos: ");
    scanf("%d", &qtd_a);
    //Receber o valor do número de questões da prova
    printf("Informe o número de questões da prova: ");
    scanf("%d",&quest);
    //Receber o gabarito da prova
    printf("Informe o gabarito da prova: \n");
    for (i = 0; i < quest; i++) 
        scanf(" %c", &gabarito[i]);
    //Recebimento do RA juntamente com o gabarito do aluno
    for (aluno = 1; aluno <= qtd_a; aluno++) {
        acertos = 0;
        printf("Informe o RA do aluno %d: \n",aluno);
        scanf("%d",&ra[aluno]);
        printf("Digite as respostas do RA%d: ", ra[aluno]);
            for (i = 0; i < quest; i++) {
                scanf(" %c", &resp[i]);
    //Validando as respostas recebidas dos alunos com o gabarito
                if (tolower(resp[i]) == tolower(gabarito[i])) {
                    acertos = acertos + 1;
                }   
            }
            float nota = (((float)acertos/(float)quest)*10);
        printf("O aluno %d (RA%d) acertou %d questões.\nSua nota foi de: %.2f.\n\n", aluno, ra[aluno], acertos, nota);
    }
            
  return 0; 
}

void instrucoes() {
    //Boas-vindas ao programa
    printf("*******************************************************************************************");
    printf("\nOlá, seja bem vindo(a) ao software de correção de provas!");
    printf("\n\nPrimeiramente, você deve informar o número de questões da prova.");
    printf("\nEm seguida, informar a quantidade de alunos da sala.\n");
    printf("\nApós informar os valores corretamente, você deverá informar: ");
    printf("\nO gabarito da prova, as respostas e o RA correspondente dos alunos. ");
    printf("\nO programa irá calcular a nota e informar a lista de cada um dos alunos. \n");
    printf("\nOBS: Em caso de utilizar algum separador decimal, por favor, utilizar a VÍRGULA.");
    printf("\n*******************************************************************************************\n");
}

/*
==================================================================================
                               Média ponderada
==================================================================================
Empresa: Nossa empresa.
Equipe de Programadores:
               Gabriel de Oliveira Buchara;
               Gabriel Toshio Hirokawa Higa;
               Pedro Gabriel de Andrade; e
               Rafael Vieira Rodrigues.
Curso: Tecnologia em Análise e Desenvolvimento de Sistemas.
Data de início do projeto: 25/08/2022
----------------------------------------------------------------------------------
Descrição do Programa:
		Este programa calcula e mostra médias ponderadas.
        O usuário é responsável por inserir as notas e os pesos a elas
        correspondentes.
----------------------------------------------------------------------------------
Versão do programa: 1.0
Melhorias da versão: primeira versão.
Data de lançamento da versão: 01/09/2022
==================================================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int exibe_menu() {
    int escolha;
    printf("\nOlá, seja bem-vindo à calculadora de médias ponderadas.");
    printf("\nSelecione a opção desejada:");
    printf("\n1. Calcular uma média ponderada.");
    printf("\n2. Ver manual de instruções do programa.");
    printf("\n3. Sair.\n");

    printf("Opção desejada: ");
    scanf("%d", &escolha);
    return escolha;
}

int valida_nota(float nota) {
    if (nota < 0.0 || nota > 10.0) {
        // Nota inválida.
        printf("Você inseriu a nota: %.2f", nota);
        printf("\nA nota deve estar entre 0 e 10.");
        printf("\nInsira um nota válida.");
        return 0;
    } else {
        // Nota válida.
        printf("Você inseriu a nota: %.2f\n", nota);
        return 1;
    }
}

int valida_peso(float peso) {
    if (peso <= 0.0) {
        // Peso inválido.
        printf("Você inseriu o peso: %.2f", peso);
        printf("\nO peso deve ser positivo.");
        printf("\nInsira um peso válido.");
        return 0;
    } else {
        // Peso válido.
        printf("Você inseriu o peso: %.2f\n", peso);
        return 1;
    }
}

void calcula_media_ponderada() {
    float nota1, nota2, nota3, nota4, peso1, peso2, peso3, peso4, media;

    // Recebe as notas e os pesos, fazendo as devidas validações.
    // Primeira nota.
    do {
        printf("\nInsira a primeira nota: ");
        scanf("%f", &nota1);
    } while (!valida_nota(nota1));

    // Primeiro peso.
    do {
        printf("\nInsira o peso da primeira nota: ");
        scanf("%f", &peso1);
    } while (!valida_peso(peso1));

    // Segunda nota.
    do {
        printf("\nInsira a segunda nota: ");
        scanf("%f", &nota2);
    } while (!valida_nota(nota2));

    // Segundo peso.
    do {
        printf("\nInsira o peso da segunda nota: ");
        scanf("%f", &peso2);
    } while (!valida_peso(peso2));

    // Terceira nota.
    do {
        printf("\nInsira a terceira nota: ");
        scanf("%f", &nota3);
    } while (!valida_nota(nota3));

    // Terceiro peso.
    do {
        printf("\nInsira o peso da terceira nota: ");
        scanf("%f", &peso3);
    } while (!valida_peso(peso3));

    // Quarta nota.
    do {
        printf("\nInsira a quarta nota: ");
        scanf("%f", &nota4);
    } while (!valida_nota(nota4));

    // Quarto peso.
    do {
        printf("\nInsira o peso da quarta nota: ");
        scanf("%f", &peso4);
    } while (!valida_peso(peso4));

    // Calcula a média ponderada.
    media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3 + nota4 * peso4) / (peso1 + peso2 + peso3 + peso4);

    // Mostra os valores de entrada.
    printf("\nVocê inseriu os seguintes valores: ");
    printf("\nNota: %0.2f \t Peso: %.2f", nota1, peso1);
    printf("\nNota: %0.2f \t Peso: %.2f", nota2, peso2);
    printf("\nNota: %0.2f \t Peso: %.2f", nota3, peso3);
    printf("\nNota: %0.2f \t Peso: %.2f", nota4, peso4);

    // Mostra o resultado.
    printf("\n\nA media ponderada é: %.2f.", media);
}

void mostra_instrucoes() {
    printf("\n==================================== Instruções ========================================");
    printf("\nEste programa calcula a média ponderada entre quatro notas.");
    printf("\nEm uma média ponderada, cada valor é multiplicado por um peso.\nOs produtos são, então, somados, e a soma é dividida pela soma dos pesos.");
    printf("\nSerão requisitados, alternadamente, quatro notas e seus pesos correspondentes.");
    printf("\nCaso um valor inválido seja inserido, o programa requisitará um valor válido.");
    printf("\nNotas são inválidas se forem negativas ou maior do que 10.");
    printf("\nPesos são inválidos se forem negativos.");
    printf("\nO ponto deve ser utilizada como separador decimal, para os números decimais.");
    printf("\nSe todos os valores inseridos forem válidos, o programa exibirá a média ponderada.");
    printf("\n========================================================================================\n");
}

int main() {
    // Configura os caracteres da língua portuguesa como padrão para o programa.
    // Acentos serão exibidos corretamente. Números decimais ainda terão o ponto como separador.
    setlocale(LC_ALL, "Portuguese");

    // Declaração de variáveis
    int continuar_execucao, opcao_menu;
    continuar_execucao = 1;

    // Exibe o menu
    opcao_menu = exibe_menu();

    // Executa a escolha do usuário
    if (opcao_menu == 1) {
        // Executa a calculadora.
        calcula_media_ponderada();
    } else if (opcao_menu == 2) {
        // Exibe instruções.
        mostra_instrucoes();
        // Retorna ao começo do programa.
        main();
        continuar_execucao = 0;
    } else if(opcao_menu == 3) {
        // Encerra o programa.
        printf("Obrigado por utilizar nosso software!!!");
        return 0;
    } else {
        // Informa o usuário que a opção é inválida.
        printf("Opção inválida.");
        // Retorna ao começo do programa.
        main();
    }

    // Pergunta se o usuário quer calcular outra média.
    while (continuar_execucao == 1) {
        printf("\n\nVocê deseja calcular outra média?");
        printf("\n1. Sim.");
        printf("\n2. Não.");
        printf("\n3. Voltar ao menu principal.");
        printf("\nInsira a opção: ");
        scanf("%d", &continuar_execucao);
        if (continuar_execucao == 1) {
            // Executa a calculadora.
            calcula_media_ponderada();

        } else if (continuar_execucao == 2) {
            // Encerra o programa.
            printf("\nObrigado por utilizar nosso software!!!");
            return 0;

        } else if(continuar_execucao == 3) {
            // Retorna ao menu principal.
            main();

        } else {
            printf("\nOpção inválida.\n");
            // Redefine o valor da variável para cair no while
            continuar_execucao = 1;
        }
    }
    return 0;
}

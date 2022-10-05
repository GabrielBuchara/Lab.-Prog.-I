/*
==================================================================================
                               M�dia ponderada
==================================================================================
Empresa: Nossa empresa.
Equipe de Programadores:
               Gabriel de Oliveira Buchara;
               Gabriel Toshio Hirokawa Higa;
               Pedro Gabriel de Andrade; e
               Rafael Vieira Rodrigues.
Curso: Tecnologia em An�lise e Desenvolvimento de Sistemas.
Data de in�cio do projeto: 25/08/2022
----------------------------------------------------------------------------------
Descri��o do Programa:
		Este programa calcula e mostra m�dias ponderadas.
        O usu�rio � respons�vel por inserir as notas e os pesos a elas
        correspondentes.
----------------------------------------------------------------------------------
Vers�o do programa: 1.0
Melhorias da vers�o: primeira vers�o.
Data de lan�amento da vers�o: 01/09/2022
==================================================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int exibe_menu() {
    int escolha;
    printf("\nOl�, seja bem-vindo � calculadora de m�dias ponderadas.");
    printf("\nSelecione a op��o desejada:");
    printf("\n1. Calcular uma m�dia ponderada.");
    printf("\n2. Ver manual de instru��es do programa.");
    printf("\n3. Sair.\n");

    printf("Op��o desejada: ");
    scanf("%d", &escolha);
    return escolha;
}

int valida_nota(float nota) {
    if (nota < 0.0 || nota > 10.0) {
        // Nota inv�lida.
        printf("Voc� inseriu a nota: %.2f", nota);
        printf("\nA nota deve estar entre 0 e 10.");
        printf("\nInsira um nota v�lida.");
        return 0;
    } else {
        // Nota v�lida.
        printf("Voc� inseriu a nota: %.2f\n", nota);
        return 1;
    }
}

int valida_peso(float peso) {
    if (peso <= 0.0) {
        // Peso inv�lido.
        printf("Voc� inseriu o peso: %.2f", peso);
        printf("\nO peso deve ser positivo.");
        printf("\nInsira um peso v�lido.");
        return 0;
    } else {
        // Peso v�lido.
        printf("Voc� inseriu o peso: %.2f\n", peso);
        return 1;
    }
}

void calcula_media_ponderada() {
    float nota1, nota2, nota3, nota4, peso1, peso2, peso3, peso4, media;

    // Recebe as notas e os pesos, fazendo as devidas valida��es.
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

    // Calcula a m�dia ponderada.
    media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3 + nota4 * peso4) / (peso1 + peso2 + peso3 + peso4);

    // Mostra os valores de entrada.
    printf("\nVoc� inseriu os seguintes valores: ");
    printf("\nNota: %0.2f \t Peso: %.2f", nota1, peso1);
    printf("\nNota: %0.2f \t Peso: %.2f", nota2, peso2);
    printf("\nNota: %0.2f \t Peso: %.2f", nota3, peso3);
    printf("\nNota: %0.2f \t Peso: %.2f", nota4, peso4);

    // Mostra o resultado.
    printf("\n\nA media ponderada �: %.2f.", media);
}

void mostra_instrucoes() {
    printf("\n==================================== Instru��es ========================================");
    printf("\nEste programa calcula a m�dia ponderada entre quatro notas.");
    printf("\nEm uma m�dia ponderada, cada valor � multiplicado por um peso.\nOs produtos s�o, ent�o, somados, e a soma � dividida pela soma dos pesos.");
    printf("\nSer�o requisitados, alternadamente, quatro notas e seus pesos correspondentes.");
    printf("\nCaso um valor inv�lido seja inserido, o programa requisitar� um valor v�lido.");
    printf("\nNotas s�o inv�lidas se forem negativas ou maior do que 10.");
    printf("\nPesos s�o inv�lidos se forem negativos.");
    printf("\nO ponto deve ser utilizada como separador decimal, para os n�meros decimais.");
    printf("\nSe todos os valores inseridos forem v�lidos, o programa exibir� a m�dia ponderada.");
    printf("\n========================================================================================\n");
}

int main() {
    // Configura os caracteres da l�ngua portuguesa como padr�o para o programa.
    // Acentos ser�o exibidos corretamente. N�meros decimais ainda ter�o o ponto como separador.
    setlocale(LC_ALL, "Portuguese");

    // Declara��o de vari�veis
    int continuar_execucao, opcao_menu;
    continuar_execucao = 1;

    // Exibe o menu
    opcao_menu = exibe_menu();

    // Executa a escolha do usu�rio
    if (opcao_menu == 1) {
        // Executa a calculadora.
        calcula_media_ponderada();
    } else if (opcao_menu == 2) {
        // Exibe instru��es.
        mostra_instrucoes();
        // Retorna ao come�o do programa.
        main();
        continuar_execucao = 0;
    } else if(opcao_menu == 3) {
        // Encerra o programa.
        printf("Obrigado por utilizar nosso software!!!");
        return 0;
    } else {
        // Informa o usu�rio que a op��o � inv�lida.
        printf("Op��o inv�lida.");
        // Retorna ao come�o do programa.
        main();
    }

    // Pergunta se o usu�rio quer calcular outra m�dia.
    while (continuar_execucao == 1) {
        printf("\n\nVoc� deseja calcular outra m�dia?");
        printf("\n1. Sim.");
        printf("\n2. N�o.");
        printf("\n3. Voltar ao menu principal.");
        printf("\nInsira a op��o: ");
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
            printf("\nOp��o inv�lida.\n");
            // Redefine o valor da vari�vel para cair no while
            continuar_execucao = 1;
        }
    }
    return 0;
}

#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <string.h>


/*
 
Elabore um programa para ordenar nomes em ordem alfab�tica. O programa
deve inicialmente requerer ao usu�rio a quantidade de nomes a serem
ordenados e em seguida pedir para o usu�rio informar os nomes. O programa
deve mostrar uma lista com os nomes ordenados em ordem alfab�tica.

 */

int main() {
	//Habilitando pt-BR
	setlocale(LC_ALL, "Portuguese");
	//Declara��o de vari�veis
	int qtd;
	char nome[100];
	int i, j;
	//Receber a quantidade de nomes que ser�o ordenadas
	printf("Informe a quantidade de nomes para serem organizados: ");
	scanf("%d",&qtd);
	//Recebendo os nomes
	printf("\nNomes recebidos: \n");
	for(i = 0; i < qtd; i++) {
		printf("Nome %d: \n",i+1);
		scanf(" %99[^\n]",nome[i]);
	}
	//Ordenando os nomes
	
	
	
	return 0;
}

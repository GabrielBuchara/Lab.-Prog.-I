#include <stdio.h>
#include <locale.h>
#include <string.h>

/* 

Elabore um programa para ordenar nomes em ordem alfabética. O programa
deve inicialmente requerer ao usuário a quantidade de nomes a serem
ordenados e em seguida pedir para o usuário informar os nomes. O programa
deve mostrar uma lista com os nomes ordenados em ordem alfabética.

*/

int main() {
	//Habilitando pt-BR
	setlocale(LC_ALL, "Portuguese");
	//Declaração de variáveis
	int qtd_nomes,i,j,ordena;
	char aux[100];
	//Declaração da matriz
	//char nome[qtd_nomes_max][caracteres_max_nomes];
	char nome[50][100];
	//Recebendo a quantidade de nomes
	printf("Informe a quantidade de nomes: \n");
	scanf("%d",&qtd_nomes);
	printf("\nDigite sua lista de nomes: \n");
	//Recebendo os nomes do usuário
	for(i = 0; i < qtd_nomes; i++){
		printf("Nome %d: \n",i+1);
		scanf(" %99[^\n]",nome[i]);
	}
	//Mostrando os nomes digitados
	printf("\nNomes digitados:\n");
	for (i = 0; i < qtd_nomes; i++){
		printf("Nome %d: %s\n",i+1, nome[i]);
	}
	//Ordenando em ordem alfabética
	for (i = 0; i < qtd_nomes; i++){
		for (j = i; j < qtd_nomes; j++){
			ordena = strcmp(nome[i],nome[j]); //Se nome na posição i vier antes da j, será negativo. Se for igual, será 0. Se vier depois do j, será +1.
			
			if (ordena > 0){
				strcpy(aux, nome[i]); //Destino, origem
				strcpy(nome[i], nome[j]); //Destino, origem
				strcpy(nome[j],aux);
			}
		}	
	}
	//Mostrando a lista em ordem alfabética
	printf("\n------------ Lista Ordenada ------------\n");
	for (i = 0; i < qtd_nomes; i++){
		printf("\t%s\n",nome[i]);
	}
	printf("\n");
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

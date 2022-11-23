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
	int qtd_nomes,i,j,ordena;
	char aux[100];
	//Declara��o da matriz
	//char nome[qtd_nomes_max][caracteres_max_nomes];
	char nome[50][100];
	//Recebendo a quantidade de nomes
	printf("Informe a quantidade de nomes: \n");
	scanf("%d",&qtd_nomes);
	printf("\nDigite sua lista de nomes: \n");
	//Recebendo os nomes do usu�rio
	for(i = 0; i < qtd_nomes; i++){
		printf("Nome %d: \n",i+1);
		scanf(" %99[^\n]",nome[i]);
	}
	//Mostrando os nomes digitados
	printf("\nNomes digitados:\n");
	for (i = 0; i < qtd_nomes; i++){
		printf("Nome %d: %s\n",i+1, nome[i]);
	}
	//Ordenando em ordem alfab�tica
	for (i = 0; i < qtd_nomes; i++){
		for (j = i; j < qtd_nomes; j++){
			ordena = strcmp(nome[i],nome[j]); //Se nome na posi��o i vier antes da j, ser� negativo. Se for igual, ser� 0. Se vier depois do j, ser� +1.
			
			if (ordena > 0){
				strcpy(aux, nome[i]); //Destino, origem
				strcpy(nome[i], nome[j]); //Destino, origem
				strcpy(nome[j],aux);
			}
		}	
	}
	//Mostrando a lista em ordem alfab�tica
	printf("\n------------ Lista Ordenada ------------\n");
	for (i = 0; i < qtd_nomes; i++){
		printf("\t%s\n",nome[i]);
	}
	printf("\n");
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

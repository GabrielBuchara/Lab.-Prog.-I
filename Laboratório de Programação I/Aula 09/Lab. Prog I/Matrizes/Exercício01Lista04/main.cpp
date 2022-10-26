/*

Faça um programa que receba via teclado valores inteiros para
uma matriz 3x4. Em seguida mostre:
a) A matriz digitada.
b) A soma dos elementos de cada linha da matriz.
c) A soma dos elementos de cada coluna da matriz.
d) A soma de todos os elementos da matriz.

*/


#include <stdio.h>
#include <locale.h>



int main() {
	//Habilitando pt-BR
	setlocale (LC_ALL, "Portuguese");
	//Declaração de variáveis
	int i,j,somaL,somaC,somaT;
	int SomaL[3];
	int SomaC[4];
	int matriz[3][4];
	//Receber os valores da matriz
	for (i = 0; i < 3; i++){
		for (j = 0; j < 4; j++) {
			printf("Digite o valor dos índices [%d][%d]: \n",i,j);
			scanf("%d\n",&matriz[i][j]);	
	//
		}
	}	
	//a) O valor da matriz digitada:
	printf("\na) O valor da matriz digitada é: \n\n");
	
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d\t",matriz[i][j]);
		}
		printf("\n");
	}
	
	//b) Aqui você congela a linha e varre a coluna
	
	//b) Soma do elemento de cada linha da matriz
	for (i = 0; i < 3; i++)
	{
		//Zerar o acumulador antes de entrar na soma da linha
		somaL = 0;
		for (j = 0; j < 4; j++){
			somaL = somaL + matriz[i][j];
		}
		SomaL[i] = somaL;
	}
	//b) Mostrando o valor da soma dos elementos da linha
	printf("\nb) Soma das linhas: \n");
	for (i = 0; i < 3; i++){
		printf("\n Soma da linha [%d]: %d. \n",i,SomaL[i]);
	}
	//c) Aqui você congela a coluna e varre a linha
	
	//c) Soma do elemento de cada coluna da matriz
	for (j = 0; j < 4; j++){
		//Zerar o acumulador antes de entrar na soma da coluna
		somaC = 0;
		for (i = 0; i < 3; i++){
			somaC = somaC + matriz[i][j];
		}
		SomaC[j] = somaC;
	}
	//c) Mostrando o valor da soma dos elementos da coluna
	printf("\nc) A soma das colunas: \n");
	for (j = 0; j < 4; j++){
		printf("\n Soma da coluna [%d]: %d. \n",j,SomaC[j]);
		
	}
	
	//d) Soma de todos os elementos da matriz
	somaT = 0;
	for (i = 0; i < 3; i++){
		for (j = 0; j < 4; j++){
			somaT = somaT + matriz[i][j];
		}
		
	}
	//d) Mostrando a soma de todos os elementos da matriz
	printf("\nd) A soma de todos os elementos da matriz: %d. \n",somaT);
	
	
	
	
	
	
	
	
	
	
	

	
	return 0;
}

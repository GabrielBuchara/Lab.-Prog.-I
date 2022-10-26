#include <iostream>
#include <stdio.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	setlocale (LC_ALL, "Portuguese");
	
	
	int i, j;
	int matriz1[3][3] = {0,1,2,3,4,5,6,7,8,9}
	int matriz2[3][3] = {5,5,5,5,5,5,5,5,5}
	char matriz3 [2][4] = {'a','b','c','d','e'};
	float matriz4 [2][3];
	
	
	
	
	
	//Mostrando o valor da matriz de char
/*	for (i = 0; i < 2; i++){
		for (j = 0; j < 4; j++){
			printf("%c\t",matriz3[i][j]);
		}
		printf("\n");
	}
*/	
	
	//Preenchendo a matriz com o input do usuário
	for (i = 0; i < 2; i++){
		for (j = 0; j < 3; j++) {
			printf("\nEscreva o valor da matriz na posição [%d][%d]: ",i,j);
			scanf("%f",&matriz4[i][j]);
		}
		printf("\n");
	}
	//Mostrando o valor da matriz inputada
	printf("\nO valor da matriz informada é: \n\n");
	
	for (i = 0; i < 2; i++){
		for (j = 0; j < 3; j++){
			printf("%.2f\t",matriz4[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	
	
	return 0;
}

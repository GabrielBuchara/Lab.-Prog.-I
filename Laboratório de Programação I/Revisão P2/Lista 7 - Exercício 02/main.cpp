#include <iostream>
#include <string.h>
#include <stdio.h>
#include <locale.h>

/* 
Lista 7
Exerc�cio 02) As disciplinas de f�sica e de c�lculo apresentam 4 provas. Fa�a um programa que receba as notas das provas de cada disciplina e 
calcule a m�dia de cada uma delas.

*/

int main() {
	//Habilitando pt-BR
	setlocale(LC_ALL, "Portuguese");
	//Declara��o de vari�veis
	float disc_fis[4];
	float disc_calc[4];
	float nota[4];
	float med[4];
	int i, j;
	float medF;
	//Recebendo as notas
	i = 0;
	printf("Informe o valor da nota da prova %d: ",i+1);
	for(i = 0; i < 4; i ++){
		scanf("%f",&nota[i]);
	}
	//C�lculo da m�dia
	for(i  = 0; i < 4; i++){
		med[i] = (nota[i] / 4);
		medF = medF + med[i];
	}
		//Mostrando o valor das notas
	printf("Notas recebidas: \n");
	for (i = 0; i < 4; i++){
		printf("Nota %d: %.2f. \n",i+1,nota[i]);
	}
	//Mostrando o valor da m�dia da sala
	printf("A m�dia da sala foi de: %.2f. ",medF);


	return 0;
}

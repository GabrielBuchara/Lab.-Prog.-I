
/*
Média simples de n notas P:


*/


#include <stdio.h>
#include <locale.h>


int main() {
	//Setando pt-BR
	setlocale(LC_ALL, "Portuguese");
	//Declaração de variáveis
	float notas, acumulador, media;
	int provas, i;
	//Receber número de provas
	printf("Informe o número de provas: ");
	scanf("%f", &notas);
	//Condição while para o número de provas
	while (notas <= 0) {
		printf("Valor inválido. Digite um valor positivo. \n");
		printf("Informe o número de provas: \n");
		scanf("%f\n", &notas);
	}
	//
	acumulador = 0;
	//Receber valores das notas com o laço for
	for (i = 1; i <= notas; i++) {
		printf("Informe o valor da nota P%d", i);
		scanf("%f",&provas);
}
	while ((provas < 0) || (provas >10)) {
		printf("Valor inválido. Digite um número entre 0 e 10. ");
	}
	
	media = acumulador / notas;
	printf("Média: %.2f", media);
	
	
		
		
	return 0;	
	}
	
	

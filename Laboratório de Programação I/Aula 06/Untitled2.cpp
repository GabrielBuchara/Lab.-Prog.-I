
/*
M�dia simples de n notas P:


*/


#include <stdio.h>
#include <locale.h>


int main() {
	//Setando pt-BR
	setlocale(LC_ALL, "Portuguese");
	//Declara��o de vari�veis
	float notas, acumulador, media;
	int provas, i;
	//Receber n�mero de provas
	printf("Informe o n�mero de provas: ");
	scanf("%f", &notas);
	//Condi��o while para o n�mero de provas
	while (notas <= 0) {
		printf("Valor inv�lido. Digite um valor positivo. \n");
		printf("Informe o n�mero de provas: \n");
		scanf("%f\n", &notas);
	}
	//
	acumulador = 0;
	//Receber valores das notas com o la�o for
	for (i = 1; i <= notas; i++) {
		printf("Informe o valor da nota P%d", i);
		scanf("%f",&provas);
}
	while ((provas < 0) || (provas >10)) {
		printf("Valor inv�lido. Digite um n�mero entre 0 e 10. ");
	}
	
	media = acumulador / notas;
	printf("M�dia: %.2f", media);
	
	
		
		
	return 0;	
	}
	
	

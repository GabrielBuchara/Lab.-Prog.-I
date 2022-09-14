
/*
Estrutura de repetição: ENQUANTO (while)
-While:

while (condição) 
{
	ação (enquanto a condição for VERDADEIRA)
}

*/


#include <stdio.h>
#include <locale.h>


int main() {
	//Setando pt-BR
	setlocale(LC_ALL, "Portuguese");
	//Declaração de variáveis
	int pos = 1, neg = -1;
	//Condição while
	while (pos >= 0) {
		printf("Informe um valor negativo: \n");
		scanf("%d",&pos);
	}
	//Condição while
	while (neg <= 0) {
		printf("Informe um valor positivo: \n");
		scanf("%d",&neg);
	}
	








		
	return 0;	
}
	
	

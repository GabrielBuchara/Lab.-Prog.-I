
/*
Estrutura de repeti��o: ENQUANTO (while)
-While:

while (condi��o) 
{
	a��o (enquanto a condi��o for VERDADEIRA)
}

*/


#include <stdio.h>
#include <locale.h>


int main() {
	//Setando pt-BR
	setlocale(LC_ALL, "Portuguese");
	//Declara��o de vari�veis
	int pos = 1, neg = -1;
	//Condi��o while
	while (pos >= 0) {
		printf("Informe um valor negativo: \n");
		scanf("%d",&pos);
	}
	//Condi��o while
	while (neg <= 0) {
		printf("Informe um valor positivo: \n");
		scanf("%d",&neg);
	}
	








		
	return 0;	
}
	
	

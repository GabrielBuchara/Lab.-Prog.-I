
/*
Tabuada de um n�mero


*/


#include <stdio.h>
#include <locale.h>


int main() 
{
	//Setando pt-BR
	setlocale(LC_ALL, "Portuguese");
	//Declara��o de vari�veis
	int n, i;
	float res;
	//Receber n�mero para ser tabuado
	printf("Informe um n�mero para ser usado na tabuada: ");
	scanf("%d",&n);
	//Estrutura for
	for (i = 0; i <=10; i++) {
		res = n * i;
		printf("\n%d X %d = %.2f \n", n, i, res);
	}

	
		
		
	return 0;	
}
	
	

/*
	Posi��o     Fibonacci
	1				1
	2				1
	3				2
	4				3
	5				5
	6				8
	...				...
	

-Algoritmo que receba as 30 primeiras posi��es. Imprima elas depois.


*/

#include <stdio.h>
#include <locale.h>

int main() {
	//Habilitando pt-BR
	setlocale (LC_ALL, "Portuguese");
	//Declara��o de var�aveis
	int fibo[30] = {1,1}, i, pos;
//	fibo[0] = 1; Outro jeito de atribuir o valor
//	fibo[1] = 1; Outro jeito de atribuir o valor
	//La�o for para mostrar os valoes
	for (i = 2; i < 30; i++){
		fibo[i] = fibo[i - 1] + fibo[i-2];
	}
	
	printf("\nFibo\t�ndice\tPosi��o\n");
	
	for (i = 0; i < 30; i++){
		printf("%d \t %d \t %d \n\n",fibo[i],i,i+1);
	}
	
	//Usu�rio inserindo a posi��o
	printf("Qual posi��o voc� deseja saber? ");
	scanf("%d",&pos);
	printf("A Fibonacci na posi��o %d �: %d.",pos,fibo[pos-1]);
	
	
	
	return 0;
}

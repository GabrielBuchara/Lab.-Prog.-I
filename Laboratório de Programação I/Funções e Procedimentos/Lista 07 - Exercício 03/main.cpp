/*

1. Fa�a um programa que receba dois n�meros inteiros, A e B
(podem ser positivos ou negativos), em seguida o programa deve
mostrar:
a. Calcular a soma de A e B.
b. Calcular a subtra��o entre A e B.
c. Calcular a multiplica��o entre A e B;.
d. Calcular a divis�o de A por B.
e. Calcular A elevado a B.
f. Calcular o fatorial de A.

Fa�a isso sem incluir a biblioteca <math.h>

*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

//Receber os valores
void recebeValores(int x, int y){
	int i;
	//Recebendo o valor de A
	printf("Informe o valor de A: ");
	scanf("%d",&x);
	//Recebendo o valor de B
	printf("Informe o valor de B: ");
	scanf("%d",&y);
	
}

//Soma de A e B
int somaAB(int x, int y) {
	int res;
	
	res = (x + y);
	
	printf("Soma: %d. \n",res);
	
	return res;
	
}

//Subtra��o de A e B
int subtracaoAB(int x, int y) {
	int res;
	
	res = (x - y);
	
	printf("Subtra��o: %d. \n",res);
	
	return res;
}

//Multiplica��o de A e B
int multiplicacaoAB(int x, int y) {
	int res;
	
	res = (x * y);
	
	printf("Multiplica��o: %d. \n",res);
	
	return res;
}

//Divis�o de A e B
int divisaoAB(int x, int y) {
	float res; //Divis�o de inteiros resultado em real.
	
	res = ((float)x/y);
	
	printf("Divis�o: %.2f. \n",res);
	
	return res;
}

//Elevado de A e B
void elevadoAB(int x, int y){
	float res;
	int i;
	
	for (i = 0; i < y; i++){
		res = (res * x);
	}
	printf("A elevado a B: %.2f. \n");
}


int main() {
	//Habilitando pt-BR
	setlocale(LC_ALL,"Portuguese");
	//Declara��o de vari�veis
	int A, B, C;
	//Recebendo os valores
	recebeValores(A,B);
	//C�lculos
	//a) Soma:
	C = somaAB(A,B);
	//b) Subtra��o:
	C = subtracaoAB(A,B);
	//c) Multiplica��o:
	C = multiplicacaoAB(A,B);
	//d) Divis�o:
	C = divisaoAB(A,B);
	//e) Elevado (sem fun��o pow() )
	C = elevadoAB(A,B);
	
	
	
	
	
	
	return 0;
}



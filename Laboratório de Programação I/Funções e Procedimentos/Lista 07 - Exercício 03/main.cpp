/*

1. Faça um programa que receba dois números inteiros, A e B
(podem ser positivos ou negativos), em seguida o programa deve
mostrar:
a. Calcular a soma de A e B.
b. Calcular a subtração entre A e B.
c. Calcular a multiplicação entre A e B;.
d. Calcular a divisão de A por B.
e. Calcular A elevado a B.
f. Calcular o fatorial de A.

Faça isso sem incluir a biblioteca <math.h>

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

//Subtração de A e B
int subtracaoAB(int x, int y) {
	int res;
	
	res = (x - y);
	
	printf("Subtração: %d. \n",res);
	
	return res;
}

//Multiplicação de A e B
int multiplicacaoAB(int x, int y) {
	int res;
	
	res = (x * y);
	
	printf("Multiplicação: %d. \n",res);
	
	return res;
}

//Divisão de A e B
int divisaoAB(int x, int y) {
	float res; //Divisão de inteiros resultado em real.
	
	res = ((float)x/y);
	
	printf("Divisão: %.2f. \n",res);
	
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
	//Declaração de variáveis
	int A, B, C;
	//Recebendo os valores
	recebeValores(A,B);
	//Cálculos
	//a) Soma:
	C = somaAB(A,B);
	//b) Subtração:
	C = subtracaoAB(A,B);
	//c) Multiplicação:
	C = multiplicacaoAB(A,B);
	//d) Divisão:
	C = divisaoAB(A,B);
	//e) Elevado (sem função pow() )
	C = elevadoAB(A,B);
	
	
	
	
	
	
	return 0;
}



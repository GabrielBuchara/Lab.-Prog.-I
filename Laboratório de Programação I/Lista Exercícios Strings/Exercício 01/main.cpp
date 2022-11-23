#include <stdio.h>
#include <string.h>
#include <locale.h>


/* 

Fa�a um programa que receba uma frase via teclado, em seguida
o programa deve:
a) Mostrar a frase digitada.
b) Determinar o n�mero de caracteres digitados (sem usar a
fun��o strlen()) e mostrar na tela.
c) Repita o item b) usando a fun��o strlen().
d) O n�mero de caracteres desconsiderando-se os caracteres de
espa�o.

*/

int main() {
	
	//Habilitando pt-BR
	setlocale(LC_ALL, "Portuguese");
	//Declara��o do vetor
	char texto[200];
	//Declarando uma vari�vel auxiliar
	int i, tamanho, cont = 0;
	//a) Recebendo a frase
	printf("Digite uma frase: \n");
	scanf("%199[^\n]",texto); //Ser� feita a leitura at� o \n OU at� atingir os 199 caracteres.
	//a) Mostrando a frase digitada:
	printf("\n\na) Frase digitada: %s\n",texto);
	//b) Determinando o tamanho de texto
	i = 0;
	//b) La�o while para incrementar no contador a quantidade de caracteres do texto
	while (texto[i] != '\0') { //\0 = caracter de final da string
		i = i + 1;
	}
	//b) Mostrando a quantidade de caracteres
	printf("b) A quantidade de caracteres ser� de: %d.\n",i);
	//c) Definindo o tamanho de texto, fun��o strlen()
	tamanho = strlen(texto);
	//c)Mostrando o tamanho do vetor usando a fun��o
	printf("c) A quantidade de caracteres utilizando a fun��o strlen() ser� de: %d.\n",tamanho);
	//d) Definindo o n�mero de caracteres sem considerar os espa�os
	i = 0;
	tamanho = 0;
	
	while (texto[i] != '\0'){
		if (texto[i] != ' ') {
			tamanho = tamanho + 1;
		}
	//e) EXTRA: Definindo a quantidade de letras A que aparecem no texto
		if ((texto[i] == 'a' || texto[i] == 'A')) {
			cont = cont + 1;
		}
		i = i + 1;
	}
	//d) Mostrando a quantidade de caracteres sem considerar os espa�os
	printf("d) A quantidade de caracteres sem contar os espa�os ser� de: %d.\n",tamanho);
	//EXTRA: Mostrar a quantidade de caracteres com a letra a/A
	printf("e) A quantidade de caracteres com a letra A ser� de: %d.\n",cont);
	
	

	
	return 0;
}

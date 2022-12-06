#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <string.h>


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
	//Declara��o de vari�veis
	char texto[100];
	int i, j;
	int tam_texto;
	//Recebendo o texto digitado pelo usu�rio
	printf("Digite uma frase (no m�ximo 100 caracteres): ");
	scanf(" %99[^\n]",texto);
	//a) Mostrando a frase digitada
	printf("\nO texto digitado foi: %s\n",texto);
	//b)Contar a quantidade de caracteres sem a fun��o strlen()
	i = 0;
	while (texto[i] != '\0'){
		i = i + 1;
	}
	printf("O texto informado t�m: %d caracteres. \n",i);
	//c) Strlen()
	tam_texto = strlen(texto);
	printf("O texto digitado tem: %d caracteres. \n",tam_texto);
	//d) Desconsiderando os espa�os
	i = 0;
	tam_texto = 0;
	int qtd_espaco = 0;
	int qtd_a = 0;
	
	while(texto[i] != '\0') {
		//Contar a qtd de caracteres sem espa�o
		if (texto[i] != ' '){
			tam_texto = tam_texto + 1;
		}
		//Contar a qtd de espa�os
			if(texto[i] == ' '){
				qtd_espaco = qtd_espaco + 1;
			}
		//Contar a quantidade de letras A
				if (texto[i] == 'a' || texto[i] == 'A')	{
					qtd_a = qtd_a + 1;
				}
		i = i + 1;
	}
	printf("A quantidade de caracteres sem espa�o � de: %d. \n",tam_texto);
	//Mostrando a quantidade de espa�os
	printf("A quantidade de espa�os � de: %d. \n",qtd_espaco);
	//Mostrando a quantidade de letras A
	printf("A quantidade de letras A no texto � de: %d.\n",qtd_a);
	
	
	return 0;
}

/*

Funções e Procedimentos (void)

-Procedimento (void): não retorna valor.
-Função: recebe argumento e retorna um valor.

*/

#include <stdio.h>
#include <locale.h>
#include <string.h>



//Função para imprimir o texto
void imprimeTexto(char frase[]){
	printf("Texto: %s\n",frase);
}

//Função contagem de caracteres

int lengthString(char frase[]){ //Para vetor, não precisa colocar um número. Em matrizes, informe apenas o valor da coluna (j).

	int i = 0;
	while(frase[i] != '\0'){
		i++;
	}
	return i;
}


int main() {
	//Habilitando pt-BR
	setlocale(LC_ALL, "Portuguese");
	//Declaração de variáveis
	char texto[100];
	//Recebendo o texto
	printf("Digite um texto: \n");
	scanf("%99[^\n]",texto);
	//Função para contagem de caracteres da string
	int tamanho = lengthString(texto);
	printf("O texto contém: %d caracteres. \n\n",tamanho);
	
	imprimeTexto(texto);
	printf("\n");
	imprimeTexto("Dia: 29/11/2022\n");
	imprimeTexto("Prova: 06/12/2022\n");
	imprimeTexto("MIM DE PAPAI!\n");
	

	return 0;
}


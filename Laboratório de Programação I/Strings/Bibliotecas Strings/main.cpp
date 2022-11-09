#include <stdio.h>
#include <string.h>
#include <locale.h>

/* Funções da biblioteca string.h:

1- strlen() = retorna o tamanho de uma string.
Ex:
A = strlen(string);
A é um int.

2- strcmp() = comparação de strings.
Ex:

texto1 = aaa
texto2 = aab

A = strcmp(texto1, texto2)
A < 0

A = strcmp(texto2,texto1)
A > 0

A = strcmp(texto1,texto1)
A = 0

3- strcpy() = copia uma string em outra. Não retorna nenhum valor.
Ex:
char texto1 = "abc"; 
char texto2[10];
strcpy(texto2, texto1);
texto2 <---"abc"

4- strcat() = concatenação de duas strings.
Ex:



*/

int main() {
	//Habilitando pt-BR
	setlocale (LC_ALL, "Portuguese");
	//Declaração de variáveis
	int i;
	int tamanho;
	int sem_espaco;
	char texto1[100];
	//Recebendo o valor do usuário
	printf("Informe o texto 1: ");
	scanf("%99[^\n]",texto1);
	//Mostrando o valor recebido pelo usuário
	printf("Texto 1: %s\n",texto1);
	//Determinando o tamanho da str por meio da função strlen()
	tamanho = strlen(texto1);
	printf("O texto 1 tem: %d caracteres. ",tamanho);
	//Utilizando o while para a contagem dos caracteres (sem usar a função)
	i = 0;
	sem_espaco = 0;
	while (texto1[i] != '\0') {
		if (texto1[i] != ' ') {
			sem_espaco++;
		}
		
		i++;
}
	//Mostrando o valor do contador
	printf("\nO contador do laço contou: %d caracteres. ",i);
	//Mostrar o número de caracteres sem contar com os espaços
	printf("\nO número de caracteres sem o espaço é de: %d.",sem_espaco);

	int alfabetica;
	char texto2[] = "ABC";
	printf("\nTexto 2: %s",texto2);
	alfabetica = strcmp(texto1,texto2);
	printf("\nAlfabética: %d",alfabetica);
	//Ordenar em ordem alfabética
	printf("\nOrdem alfabética: \n");
	
	if (alfabetica < 0){
		printf("%s \n %s\n",texto1,texto2);
	}
		else if (alfabetica > 0) {
			printf("%s \n %s\n",texto2,texto1);
		}
	else {
		printf("Palavras iguais. \n");
	}
	
	//Copiando uma string com a função strcpy()
	char texto3[100];
	
	strcpy(texto3,texto2);
	printf("Texto 3: %s",texto3);
	//Concatenando as strings
	strcat(texto1, " ");
	strcat(texto1, texto2);
	printf("\nConcatenando texto1 " " texto2: %s",texto1);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

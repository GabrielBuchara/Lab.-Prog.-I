#include <stdio.h>
#include <string.h>
#include <locale.h>

/* Fun��es da biblioteca string.h:

1- strlen() = retorna o tamanho de uma string.
Ex:
A = strlen(string);
A � um int.

2- strcmp() = compara��o de strings.
Ex:

texto1 = aaa
texto2 = aab

A = strcmp(texto1, texto2)
A < 0

A = strcmp(texto2,texto1)
A > 0

A = strcmp(texto1,texto1)
A = 0

3- strcpy() = copia uma string em outra. N�o retorna nenhum valor.
Ex:
char texto1 = "abc"; 
char texto2[10];
strcpy(texto2, texto1);
texto2 <---"abc"

4- strcat() = concatena��o de duas strings.
Ex:



*/

int main() {
	//Habilitando pt-BR
	setlocale (LC_ALL, "Portuguese");
	//Declara��o de vari�veis
	int i;
	int tamanho;
	int sem_espaco;
	char texto1[100];
	//Recebendo o valor do usu�rio
	printf("Informe o texto 1: ");
	scanf("%99[^\n]",texto1);
	//Mostrando o valor recebido pelo usu�rio
	printf("Texto 1: %s\n",texto1);
	//Determinando o tamanho da str por meio da fun��o strlen()
	tamanho = strlen(texto1);
	printf("O texto 1 tem: %d caracteres. ",tamanho);
	//Utilizando o while para a contagem dos caracteres (sem usar a fun��o)
	i = 0;
	sem_espaco = 0;
	while (texto1[i] != '\0') {
		if (texto1[i] != ' ') {
			sem_espaco++;
		}
		
		i++;
}
	//Mostrando o valor do contador
	printf("\nO contador do la�o contou: %d caracteres. ",i);
	//Mostrar o n�mero de caracteres sem contar com os espa�os
	printf("\nO n�mero de caracteres sem o espa�o � de: %d.",sem_espaco);

	int alfabetica;
	char texto2[] = "ABC";
	printf("\nTexto 2: %s",texto2);
	alfabetica = strcmp(texto1,texto2);
	printf("\nAlfab�tica: %d",alfabetica);
	//Ordenar em ordem alfab�tica
	printf("\nOrdem alfab�tica: \n");
	
	if (alfabetica < 0){
		printf("%s \n %s\n",texto1,texto2);
	}
		else if (alfabetica > 0) {
			printf("%s \n %s\n",texto2,texto1);
		}
	else {
		printf("Palavras iguais. \n");
	}
	
	//Copiando uma string com a fun��o strcpy()
	char texto3[100];
	
	strcpy(texto3,texto2);
	printf("Texto 3: %s",texto3);
	//Concatenando as strings
	strcat(texto1, " ");
	strcat(texto1, texto2);
	printf("\nConcatenando texto1 " " texto2: %s",texto1);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

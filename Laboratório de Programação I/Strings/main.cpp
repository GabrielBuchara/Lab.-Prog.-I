#include <stdio.h>
#include <locale.h>
/*
	STRINGS
*/
int main()
{
	//
	setlocale (LC_ALL, "Portuguese");
	//
	int i;
	char texto[20], nomes[5][100];
	
	printf("\n\nEscreva uma nova frase:\n");
	scanf("%19[^\n]",texto);
	printf("\nA nova frase eh: %s", texto);
	
	// Recebendo uma matriz com strings
	printf("\nInforme uma sequencia de 5 nomes:\n");
	for(i=0;i<5;i++)
	{
		printf("nome %d: ",i+1);
		scanf(" %[^\n]", nomes[i]);
			
	}
	// Mostrando uma matriz com strings
	printf("\nOs nomes informados foram:\n");
	for(i=0; i<5;i++)
	{
		printf("%s\n", nomes[i]);
	}
	
	return 0;
}

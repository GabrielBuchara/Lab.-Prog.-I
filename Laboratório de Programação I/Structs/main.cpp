#include <stdio.h>
#include <locale.h>



/* 
	Estrutura de Dados Heterog�neas: mais de 1 tipo primitivo de dados

-Cadastro usu�rio UCDB:

*Nome;
*RA;
*E-mail;
*Altura;

*/

typedef struct {
	//Declarando vari�veis
	char nome[100], email[50];
	int RA;
	float altura;
	
}aluno;


int main() {
	//Habilitando pt-BR
	setlocale(LC_ALL, "Portuguese");
	//Declara��o de vari�veis
	aluno estudante; //A vari�vel estudante recebe 3 vari�veis de 3 tipos diferentes (Nome, RA, E-mail, Altura).
	//Recebendo o nome do usu�rio
	printf("Informe o nome: ");
	scanf(" %99[^\n]",&estudante.nome);
	//Recebendo o RA
	printf("Informe o RA: ");
	scanf("%d",&estudante.RA);
	//Recebendo a altura
	printf("Informe a sua altura: ");
	scanf("%.2f",&estudante.altura);
	//Recebendo o e-mail
	printf("Informe o seu e-mail: ");
	scanf(" %49[^\n]",&estudante.email);
	
	//Mostrando informa��es registradas
	printf("\n\nResumo das informa��es registradas: \n\n");
	printf("Nome: %s\n",estudante.nome);
	printf("RA: %s\n",estudante.RA);
	printf("Altura: %s\n",estudante.altura);
	printf("E-mail: %s\n",estudante.email);
	
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

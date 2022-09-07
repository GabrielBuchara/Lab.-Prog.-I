/*
	Estrutura Switch-Case:
	switch (var) : Onde var � um INTEIRO.
	{
		case 1: a��o
				break;
		
		case 2: a��o
				break;
		
		case 3: a��o
				break;
		
		case 4: a��o
				break;
		
		default: a��o
		
	} 
	
	switch (var) : Onde var � um CARACTERE.
	{
		case 'a': a��o
				  break;
		case 'b': a��o
				  break;
		case 'c': a��o
				  break;
				  
		default: a��o				
	
	}
*/

#include <stdio.h>
#include <locale.h>

int main() 
{
	//Setando pt-BR
	setlocale (LC_ALL, "Portuguese");
	//Declara��o de vari�veis
	int dia;
	//Recebendo o valor
	printf("Selecione o dia da semana: \n");
	printf("\n\t1- Domingo \n\t2- Segunda\n\t3- Ter�a\n\t4- Quarta\n\t5- Quinta\n\t6- Sexta\n\t7- S�bado\n");
	scanf("%d",&dia);
	//Verificando o dia 
	switch(dia) 
	{
		case 1: 
			printf("O dia escolhido foi DOMINGO. ");
			break;
				
		case 2:
			printf("O dia escolhido foi SEGUNDA. ");
			break;
				
		case 3:
			printf("O dia escolhido foi TER�A. ");
			break;
				
		case 4:
			printf("O dia escolhido foi QUARTA. ");
			break;
				
		case 5:
			printf("O dia escolhido foi QUINTA. ");
			break;
				
		case 6:
			printf("O dia escolhido foi SEXTA. ");
			break;
				
		case 7:
			printf("O dia escolhido foi S�BADO. ");
			break;
				
		default:
			printf("Digite novamente. A op��o selecionada � inv�lida. ");
		
	}
	
	switch(dia) {
			
		case 1:
		case 7:
			printf("\n\n\t Final de Semana! ");
			break;
			
		case 2 ... 6:
			printf("\n\n\tMeio de Semana ");
			break;
			
		//default: //Em branco, pois, em cima j� foi avisado.
			
		}
	
	printf("\n\nPressione qualquer tecla para fechar. ");
	getchar(); //Roda em qualquer m�quina sem compilador ou IDE. Arquivo .exe.
	getchar();
	
	return 0;
	
}

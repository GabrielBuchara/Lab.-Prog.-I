/*
	Estrutura Switch-Case:
	switch (var) : Onde var é um INTEIRO.
	{
		case 1: ação
				break;
		
		case 2: ação
				break;
		
		case 3: ação
				break;
		
		case 4: ação
				break;
		
		default: ação
		
	} 
	
	switch (var) : Onde var é um CARACTERE.
	{
		case 'a': ação
				  break;
		case 'b': ação
				  break;
		case 'c': ação
				  break;
				  
		default: ação				
	
	}
*/

#include <stdio.h>
#include <locale.h>

int main() 
{
	//Setando pt-BR
	setlocale (LC_ALL, "Portuguese");
	//Declaração de variáveis
	int dia;
	//Recebendo o valor
	printf("Selecione o dia da semana: \n");
	printf("\n\t1- Domingo \n\t2- Segunda\n\t3- Terça\n\t4- Quarta\n\t5- Quinta\n\t6- Sexta\n\t7- Sábado\n");
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
			printf("O dia escolhido foi TERÇA. ");
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
			printf("O dia escolhido foi SÁBADO. ");
			break;
				
		default:
			printf("Digite novamente. A opção selecionada é inválida. ");
		
	}
	
	switch(dia) {
			
		case 1:
		case 7:
			printf("\n\n\t Final de Semana! ");
			break;
			
		case 2 ... 6:
			printf("\n\n\tMeio de Semana ");
			break;
			
		//default: //Em branco, pois, em cima já foi avisado.
			
		}
	
	printf("\n\nPressione qualquer tecla para fechar. ");
	getchar(); //Roda em qualquer máquina sem compilador ou IDE. Arquivo .exe.
	getchar();
	
	return 0;
	
}

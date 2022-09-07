/*
	Entradas: valor da compra, forma de pagamento: 1- A vista (10% de desconto), 2- 2, 3 ou 4 vezes (sem juros), 3- 5, 6 ou 7 vezes (10% de juros),
	4- 8, 9  ou 10 vezes (15% de juros) e 5- 11 ou 12 vezes (25% de juros). 13 FORMAS DE PAGAMENTO.
	
	Saídas: montante final a ser pago, valor da parcela a ser paga.
	
	
	OBS: O separador decimal será a VÍRGULA e não o PONTO.
	


*/


#include <stdio.h>
#include <locale.h>

int main() 
{
	//Menu de boas-vindas
	printf("------------------------------------------------------------------------------------------------------------------------");
	printf("\n\t\t\t\tLOJA\t\t\t\n\n");
	printf("------------------------------------------------------------------------------------------------------------------------");
	//Setando pt-BR
	setlocale(LC_ALL, "Portuguese");
	//Declaração de variáveis
	float val_pag, val_final, desc, juros;
	int form_pag;
	//Recebendo o valor da compra
	printf("\n\nDigite o valor da compra: R$ ");
	scanf("%f",&val_pag);
	//Mostrando as opções de pagamento
	printf("\n1- A vista \n2- Parcelado em 2 vezes; \n3- Parcelado em 3 vezes; \n4- Parcelado em 4 vezes \n5- Parcelado em 5 vezes; ");
	printf("\n6- Parcelado em 6 vezes; \n7- Parcelado em 7 vezes; \n8- Parcelado em 8 vezes; \n9- Parcelado em 9 vezes \n10- Parcelado em 10 vezes; ");
	printf("\n11- Parcelado em 11 vezes; \n12- Parcelado em 12 vezes. ");
	//Recebendo valores
	printf("\n\nDigite o valor correspondente a sua forma de pagamento: ");
	scanf("%d",&form_pag);
	//Condições switch-case
	switch (form_pag) 
	{
		case 1: 
			desc = val_pag * 0.10;
			val_final = val_pag - desc;
			printf("\nO valor da sua compra final será: R$ %.2f\n", val_final);
			break;
			
		case 2: 
			juros = val_pag * 0;
			val_final = (val_pag/2) + juros;
			printf("\nO valor da sua parcela será: R$ %.2f\n", val_final);
			break;
			
		case 3: 
			juros = val_pag * 0;
			val_final = (val_pag/3) + juros;
			printf("\nO valor da sua parcela será: R$ %.2f\n", val_final);
			break;
			
		case 4: 
			juros = val_pag * 0;
			val_final = (val_pag/4) + juros;
			printf("\nO valor da sua parcela será: R$ %.2f\n", val_final);
			break;
			
		case 5: 
			juros = val_pag * 0.10;
			val_final = (val_pag/5) + juros;
			printf("\nO valor da sua parcela será: R$ %.2f\n", val_final);
			break;
			
		case 6: 
			juros = val_pag * 0.10;
			val_final = (val_pag/6) + juros;
			printf("\nO valor da sua parcela será: R$ %.2f\n", val_final);
			break;
			
		case 7: 
			juros = val_pag * 0.10;
			val_final = (val_pag/7) + juros;
			printf("\nO valor da sua parcela será: R$ %.2f\n", val_final);
			break;
				
		case 8: 
			juros = val_pag * 0.15;
			val_final = (val_pag/8) + juros;
			printf("\nO valor da sua parcela será: R$ %.2f\n", val_final);
			break;
			
		case 9: 
			juros = val_pag * 0.15;
			val_final = (val_pag/9) + juros;
			printf("\nO valor da sua parcela será: R$ %.2f\n", val_final);
			break;
			
		case 10: 
			juros = val_pag * 0.15;
			val_final = (val_pag/10) + juros;
			printf("\nO valor da sua parcela será: R$ %.2f\n", val_final);
			break;
			
		case 11: 
			juros = val_pag * 0.25;
			val_final = (val_pag/11) + juros;
			printf("\nO valor da sua parcela será: R$ %.2f\n", val_final);
			break;
			
		case 12: 
			juros = val_pag * 0.25;
			val_final = (val_pag/12) + juros;
			printf("\nO valor da sua parcela será: R$ %.2f\n", val_final);
			break;
			
		default:
			printf("\nForma de pagamento inválida. Digite novamente. \n");
		
	}
	
	return 0;
}

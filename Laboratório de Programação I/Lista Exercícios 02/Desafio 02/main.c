/*

Faça um programa para o caixa de uma loja. O programa
deve constar de duas etapas:

Etapa 1
O usuário informa o valor de cada item comprado e o
programa calcula o valor total da compra.

Etapa 2
O usuário informa a forma de pagamento escolhida entre as
disponíveis a seguir:

    A vista                             Desconto de 10% no valor da compra.
    Prazo, em 2, 3 ou 4 vezes           Sem juros
    Prazo, em 5, 6 ou 7 vezes           Juros de 10% no valor da compra
    Prazo, em 8, 9 ou 10 vezes          Juros de 15% no valor da compra
    Prazo, em 11 ou 12 vezes            Juros de 20% no valor da compra

O programa deve retornar o valor total do montante a ser pago
pelo cliente e o valor das parcelas no caso do pagamento a prazo.



*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //Setando pt-BR
    setlocale (LC_ALL, "Portuguese");
    //Declaração de variáveis
    float vlr_item, vlr_final, desc, juros, qtd_itens;
    int opcao, i, j = 0, parc;
    //Receber os valores da quantidade de itens
    printf("Quantos itens você selecionou para compra? ");
    scanf("%f",&qtd_itens);
    //Estrutura FOR
        for (i = 1; i <= qtd_itens; i++) {
            printf("Digite o valor do item %d: ",i);
            scanf("%f",&vlr_item);
            j = j + vlr_item;
        }
        printf("Valor dos itens selecionados: %d. \n",j);
    //Mostrar opções de pagamento
    printf("\nEssas são algumas das formas de pagamento disponíveis: \n");
    printf("\n1- A vista; ");
    printf("\n2- Parcelado em 2, 3 ou 4 vezes; ");
    printf("\n3- Parcelado em 5, 6 ou 7 vezes; ");
    printf("\n4- Parcelado em 8, 9 ou 10 vezes;");
    printf("\n5- Parcelado em 11 ou 12 vezes. \n");
    printf("\nDigite uma forma de pagamento: \n");
    scanf("%d",&opcao);
    //Switch case para as opções
        switch(opcao)
        {
            case 1:
                desc = (j * 0.10);
                vlr_final = j - desc;
                printf("\nPagamento à vista, recebe 10%% de DESCONTO! \n");
                printf("\nO valor final a ser pago: %.2f. \n",vlr_final);
            break;


            case 2:
                printf("\nQuantas vezes você deseja parcelar? \n");
                scanf("%d",&parc);
                //Validação de quantidade parcela
                while (parc != 2 && parc != 3 && parc != 4){
                    printf("Número da parcela inválido. Digite novamente. ");
                    printf("\nQuantas vezes você deseja parcelar? \n");
                    scanf("%d",&parc);
                }
                juros = (j * 0);
                vlr_final = j + juros;
                printf("\nPagamento parcelado (2,3 e 4 vezes) SEM JUROS! \n");
                printf("\nO valor final a ser pago: %.2f. \n",vlr_final);
                printf("O valor da parcela: %.2f. \n",vlr_final/parc);
            break;


            case 3:
                printf("\nQuantas vezes você deseja parcelar? \n");
                scanf("%d",&parc);
                //Validação de quantidade de parcela
                while (parc != 5 && parc != 6 && parc != 7){
                    printf("Número da parcela inválido. Digite novamente. ");
                    printf("\nQuantas vezes você deseja parcelar? \n");
                    scanf("%d",&parc);
                }
                juros = (j * 0.10);
                vlr_final = j + juros;
                printf("\nPagamento parcelado (5,6 e 7 vezes) COM JUROS de 10%%! \n");
                printf("\nO valor final a ser pago: %.2f. \n",vlr_final);
                printf("\nO valor da parcela: %.2f. \n",vlr_final/parc);
            break;


            case 4:
                printf("\nQuantas vezes você deseja parcelar? \n");
                scanf("%d",&parc);
                //Validação da quantidade de parcela
                while (parc != 8 && parc != 9 && parc != 10){
                    printf("Número da parcela inválido. Digite novamente. ");
                    printf("\nQuantas vezes você deseja parcelar? \n");
                    scanf("%d",&parc);
                }
                juros = (j * 0.15);
                vlr_final = j + juros;
                printf("\nPagamento parcelado (8,9 e 10 vezes) COM JUROS de 15%%! \n");
                printf("\nO valor final a ser pago: %.2f. \n",vlr_final);
                printf("\nO valor da parcela: %.2f. \n",vlr_final/parc);
            break;


            case 5:
                printf("\nQuantas vezes você deseja parcelar? \n");
                scanf("%d",&parc);
                //Validação de quantidade de parcela
                while (parc != 11 && parc != 12){
                    printf("Número da parcela inválido. Digite novamente. ");
                    printf("\nQuantas vezes você deseja parcelar? \n");
                    scanf("%d",&parc);
                }
                juros = (j * 0.15);
                vlr_final = j + juros;
                printf("\nPagamento parcelado (11 ou 12 vezes) COM JUROS de 15%%! \n");
                printf("\nO valor final a ser pago: %.2f. \n",vlr_final);
                printf("\nO valor da parcela: %.2f. \n",vlr_final/parc);

            break;

            default:
                printf("\nDigite uma forma de pagamento válida. \n");
        }


    return 0;
}

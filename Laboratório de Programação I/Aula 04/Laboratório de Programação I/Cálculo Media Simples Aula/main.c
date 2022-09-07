/*
    Cálculo de Média Simples
    M = p1+p2/2

    Aprovado -> M >= 7
    Exame -> 4 <= M < 7
    Reprovação -> M < 4

    Entrada: p1, p2
    Saída: média, status

*/

#include <locale.h> //Biblioteca de caracteres especiais
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Definindo o idioma para português
    setlocale(LC_ALL, "Portuguese");
    //Declaração de variáveis
    float prov1, prov2, media;
    //Cabeçalho do programa
    printf("=====================================================================\n");
    printf("\t\t Calculadora de Notas dos Alunos\n");
    printf("=====================================================================\n\n");
    printf("\t\t Bem-vindo a Calculadora de Notas!\n");
    printf("=====================================================================\n");
    printf("Informe as suas notas para saber qual será sua MÉDIA. \n\n");
    printf("OBS: Qualquer caractere digitado que não for númerico, será invalidado. \n\n");
    printf("=====================================================================\n\n");
    //Receber as notas
    printf("Informe o valor da primeira nota: ");
    scanf("%f",&prov1);
    printf("\nInforme o valor da segunda nota: ");
    scanf("%f",&prov2);
    //Cálculo da média
    media = (prov1 + prov2)/ 2;
    printf("\nSua média foi de: %.2f\n",media);
    //
    if (media>=7){
        printf("\nAprovado! \n");
    }
    else
    {
        //Verificação se está de exame
        if (media >=4) {
            printf("\nExame! \n");
        }
        else {
            printf("\nReprovado! \n");
        }
    }

return 0;
}

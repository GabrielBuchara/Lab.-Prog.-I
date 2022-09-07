/*
    C�lculo de M�dia Simples
    M = p1+p2/2

    Aprovado -> M >= 7
    Exame -> 4 <= M < 7
    Reprova��o -> M < 4

    Entrada: p1, p2
    Sa�da: m�dia, status

*/

#include <locale.h> //Biblioteca de caracteres especiais
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Definindo o idioma para portugu�s
    setlocale(LC_ALL, "Portuguese");
    //Declara��o de vari�veis
    float prov1, prov2, media;
    //Cabe�alho do programa
    printf("=====================================================================\n");
    printf("\t\t Calculadora de Notas dos Alunos\n");
    printf("=====================================================================\n\n");
    printf("\t\t Bem-vindo a Calculadora de Notas!\n");
    printf("=====================================================================\n");
    printf("Informe as suas notas para saber qual ser� sua M�DIA. \n\n");
    printf("OBS: Qualquer caractere digitado que n�o for n�merico, ser� invalidado. \n\n");
    printf("=====================================================================\n\n");
    //Receber as notas
    printf("Informe o valor da primeira nota: ");
    scanf("%f",&prov1);
    printf("\nInforme o valor da segunda nota: ");
    scanf("%f",&prov2);
    //C�lculo da m�dia
    media = (prov1 + prov2)/ 2;
    printf("\nSua m�dia foi de: %.2f\n",media);
    //
    if (media>=7){
        printf("\nAprovado! \n");
    }
    else
    {
        //Verifica��o se est� de exame
        if (media >=4) {
            printf("\nExame! \n");
        }
        else {
            printf("\nReprovado! \n");
        }
    }

return 0;
}

/*
    Cálculo de média simples
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
    //Receber as notas
    printf("Informe o valor da primeira nota: ");
    scanf("%f",&prov1);
    printf("\nInforme o valor da segunda nota: ");
    scanf("%f",&prov2);
    //Cálculo da média
    media = (prov1 + prov2)/ 2;
    //Condição de aprovação
    if(media >= 7) {
        printf("\nSua média foi de: %.2f. Você está APROVADO! \n",media);
    }
    //Condição de exame
        else if(media >= 4) {
            printf("\nSua média foi de: %.2f. Você está de REPROVADO! \n",media);
        }
    //Condição de reprovação
            else if(media <=4) && (media < 7) {
                printf("\nSua média foi de: %.2f. Você está de EXAME! \n",media);
    }

return 0;
}

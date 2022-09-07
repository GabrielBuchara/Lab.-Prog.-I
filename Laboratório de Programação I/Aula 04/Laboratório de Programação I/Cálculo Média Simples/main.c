/*
    C�lculo de m�dia simples
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
    //Receber as notas
    printf("Informe o valor da primeira nota: ");
    scanf("%f",&prov1);
    printf("\nInforme o valor da segunda nota: ");
    scanf("%f",&prov2);
    //C�lculo da m�dia
    media = (prov1 + prov2)/ 2;
    //Condi��o de aprova��o
    if(media >= 7) {
        printf("\nSua m�dia foi de: %.2f. Voc� est� APROVADO! \n",media);
    }
    //Condi��o de exame
        else if(media >= 4) {
            printf("\nSua m�dia foi de: %.2f. Voc� est� de REPROVADO! \n",media);
        }
    //Condi��o de reprova��o
            else if(media <=4) && (media < 7) {
                printf("\nSua m�dia foi de: %.2f. Voc� est� de EXAME! \n",media);
    }

return 0;
}

/*

Proponha um algoritmo que calcule a raiz quadrada de
um n�mero real.

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //Setando pt-BR
    setlocale(LC_ALL, "Portuguese");
    //Declara��o das vari�veis
    double raiz, num;
    //Receber o valor do n�mero real
    printf("Informe um n�mero: ");
    scanf("%lf",&num);
    //Fun�ao sqrt (ra�z quadrada de um n�mero)
    raiz = sqrt(num);
    //Condi�ao para valida��o e mostrar o valor do ra�z
    if (raiz >= 0) {
        printf("\nA ra�z do n�mero informado ser� de: %.2lf. \n",raiz);
    }
    else {
        printf("\nErro. N�mero negativo. \n");
    }




    return 0;
}

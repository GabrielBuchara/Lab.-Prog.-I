/*

Proponha um algoritmo que calcule a raiz quadrada de
um número real.

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //Setando pt-BR
    setlocale(LC_ALL, "Portuguese");
    //Declaração das variáveis
    double raiz, num;
    //Receber o valor do número real
    printf("Informe um número: ");
    scanf("%lf",&num);
    //Funçao sqrt (raíz quadrada de um número)
    raiz = sqrt(num);
    //Condiçao para validação e mostrar o valor do raíz
    if (raiz >= 0) {
        printf("\nA raíz do número informado será de: %.2lf. \n",raiz);
    }
    else {
        printf("\nErro. Número negativo. \n");
    }




    return 0;
}

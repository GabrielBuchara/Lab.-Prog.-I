/*

Crie um algoritmo que fa�a a leitura dos dois lados de
um ret�ngulo em cm e exiba o valor da �rea em m�.


cm = a /10000
 Entrada: l1, l2,
 Sa�da: a


*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //Setando pt-BR
    setlocale(LC_ALL, "Portuguese");
    //Declara��o de vari�veis
    float l1, l2, area;
    //Receber o valor dos lados
    printf("Informe o valor do lado 1 (em cent�metros quadrados): ");
    scanf("%f",&l1);
    printf("\nInforme o valor do lado 2 (em cent�metros quadrados): ");
    scanf("%f",&l2);
    //C�lculo do ret�ngulo
    area = ((l1 * l2)/10000);
    //Mostrar valor da area
    printf("\nO valor da �rea em m�: %f. \n",area);

    return 0;
}

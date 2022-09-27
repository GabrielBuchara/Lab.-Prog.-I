/*

Crie um algoritmo que faça a leitura dos dois lados de
um retângulo em cm e exiba o valor da área em m².


cm = a /10000
 Entrada: l1, l2,
 Saída: a


*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //Setando pt-BR
    setlocale(LC_ALL, "Portuguese");
    //Declaração de variáveis
    float l1, l2, area;
    //Receber o valor dos lados
    printf("Informe o valor do lado 1 (em centímetros quadrados): ");
    scanf("%f",&l1);
    printf("\nInforme o valor do lado 2 (em centímetros quadrados): ");
    scanf("%f",&l2);
    //Cálculo do retângulo
    area = ((l1 * l2)/10000);
    //Mostrar valor da area
    printf("\nO valor da área em m²: %f. \n",area);

    return 0;
}

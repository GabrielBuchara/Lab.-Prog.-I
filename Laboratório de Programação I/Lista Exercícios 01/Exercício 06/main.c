/*

Dados três comprimentos, a, b e c, construa um
programa que indique se esses três comprimentos podem formar um
triângulo. Caso sim, indique se o triângulo é equilátero, isósceles ou
escaleno.

Equilatero: 3 lados iguais
Isosceles: 2 iguais e 1 diferente
Escaleno: 3 lados diferentes


*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //Setando pt-BR
    setlocale (LC_ALL, "Portuguese");
    //Declaração de variáveis
    float a,b,c;
    //Receber valores de a, b e c
    printf("Informe o valor do lado A: ");
    scanf("%f",&a);
    printf("Informe o valor do lado B: ");
    scanf("%f",&b);
    printf("Informe o valor do lado C: ");
    scanf("%f",&c);
    //Condição triangulo
    if(a + b > c && a + c > b && b + c > a){
        printf("Os 3 lados FORMAM um triãngulo! \n");
    //Condição triãngulo equilátero
        if (a == b && b == c && a == c) {
            printf("\nEquilátero. \n");
        }
    //Condição triângulo isósceles
            else if (a == b || b == c || a == c) {
            printf("\nIsósceles. \n");
            }
    //Condição triângulo escaleno
        else {
            printf("\nEscaleno. \n");
        }

    }

    else {
        printf("Os 3 lados NÃO formam um triângulo! \n");
    }



    return 0;
}

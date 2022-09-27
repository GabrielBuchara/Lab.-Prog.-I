/*

Dados tr�s comprimentos, a, b e c, construa um
programa que indique se esses tr�s comprimentos podem formar um
tri�ngulo. Caso sim, indique se o tri�ngulo � equil�tero, is�sceles ou
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
    //Declara��o de vari�veis
    float a,b,c;
    //Receber valores de a, b e c
    printf("Informe o valor do lado A: ");
    scanf("%f",&a);
    printf("Informe o valor do lado B: ");
    scanf("%f",&b);
    printf("Informe o valor do lado C: ");
    scanf("%f",&c);
    //Condi��o triangulo
    if(a + b > c && a + c > b && b + c > a){
        printf("Os 3 lados FORMAM um tri�ngulo! \n");
    //Condi��o tri�ngulo equil�tero
        if (a == b && b == c && a == c) {
            printf("\nEquil�tero. \n");
        }
    //Condi��o tri�ngulo is�sceles
            else if (a == b || b == c || a == c) {
            printf("\nIs�sceles. \n");
            }
    //Condi��o tri�ngulo escaleno
        else {
            printf("\nEscaleno. \n");
        }

    }

    else {
        printf("Os 3 lados N�O formam um tri�ngulo! \n");
    }



    return 0;
}

/*
Para a equação 𝑦 = 𝐴^𝑥 faça um algoritmo para calcular o valor de y dado um valor para A e um para para x, onde x representa
um número inteiro.


Dica:
– Faça uma primeira versão
considerando que x pode
assumir apenas valores
positivos.


y = A^x
A^x = y

Entrada: A, x
Saída: y


*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h> //biblioteca matemática
int main()
{
    //Habilitando pt-BR
    setlocale(LC_ALL, "Portuguese");
    //Declaração de variáveis
    int x, i;
    float A, y;
    //Receber valores
    printf("Equação: y = A^x \n");
    printf("\nInforme o valor de A: ");
    scanf("%f",&A);
    printf("\nInforme o valor de x: ");
    scanf("%d",&x);
    //Condição while para validação de x positivo
    while (x < 0) {
        printf("\nO valor de x só pode ser positivo.");
        printf("\nInforme o valor de x: \n");
        scanf("%d",&x);
    }
    //Cálculo da equação
    y = pow(A,x); //função pow é responsável por fazer a potenciação de números. Ex: pow(2,1) = 2^1.

    //Mostrar resultado da equação
    printf("\nResultado: %.2f. \n",y);



    return 0;
}

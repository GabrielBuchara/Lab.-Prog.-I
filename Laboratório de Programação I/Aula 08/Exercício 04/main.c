/*

4. Faça um programa que receba 6 números. O programa deve:

a) Calcular a soma de todos os números.
b) Definir a média simples dos 6 números
c) Quantificar quantos números são maiores e quantos são menores que a média.


*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //Habiltando pt-BR
    setlocale(LC_ALL, "Portuguese");
    //Declaração de variáveis
    int i, sum = 0, contMaior = 0, contMenor = 0, contIgual = 0;
    float num[6], med;
    //Receber os valores dos números
    for (i = 0; i < 6; i++){
        printf("Informe o valor do número %d: ",i+1);
        scanf("%f",&num[i]);
        sum = sum + num[i];
    }
    //Cálculo da média no laço for
    for (i = 0; i < 6; i ++){
        med = (sum / 6.0);
     //Condicionando para quantificar a quantidade de números maiores, menores e iguais
        if (num[i] > med){
            contMaior = contMaior + 1; //ou contMaior++;
        }
        else if (num[i] < med) {
            contMenor = contMenor + 1; //ou contMenor++;
        }
        else {
            contIgual = contIgual + 1; //ou contIgual++;
        }
    }

    //Mostrando os valores a), b) e c)
    printf("\na) A soma dos valores recebidos será de: %d. \n",sum);
    printf("\nb) O resultado da média desses valores recebidos será de: %.2f. \n",med);
    printf("\nc) A quantidade de números MAIORES que a média são: %d. \n",contMaior);
    printf("\nc) A quantidade de números MENORES que a média são: %d. \n",contMenor);
    printf("\nc) A quantidade de números IGUAIS a média são: %d. \n",contIgual);




    return 0;
}

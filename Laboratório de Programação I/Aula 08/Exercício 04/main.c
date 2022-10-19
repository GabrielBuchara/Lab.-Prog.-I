/*

4. Fa�a um programa que receba 6 n�meros. O programa deve:

a) Calcular a soma de todos os n�meros.
b) Definir a m�dia simples dos 6 n�meros
c) Quantificar quantos n�meros s�o maiores e quantos s�o menores que a m�dia.


*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //Habiltando pt-BR
    setlocale(LC_ALL, "Portuguese");
    //Declara��o de vari�veis
    int i, sum = 0, contMaior = 0, contMenor = 0, contIgual = 0;
    float num[6], med;
    //Receber os valores dos n�meros
    for (i = 0; i < 6; i++){
        printf("Informe o valor do n�mero %d: ",i+1);
        scanf("%f",&num[i]);
        sum = sum + num[i];
    }
    //C�lculo da m�dia no la�o for
    for (i = 0; i < 6; i ++){
        med = (sum / 6.0);
     //Condicionando para quantificar a quantidade de n�meros maiores, menores e iguais
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
    printf("\na) A soma dos valores recebidos ser� de: %d. \n",sum);
    printf("\nb) O resultado da m�dia desses valores recebidos ser� de: %.2f. \n",med);
    printf("\nc) A quantidade de n�meros MAIORES que a m�dia s�o: %d. \n",contMaior);
    printf("\nc) A quantidade de n�meros MENORES que a m�dia s�o: %d. \n",contMenor);
    printf("\nc) A quantidade de n�meros IGUAIS a m�dia s�o: %d. \n",contIgual);




    return 0;
}

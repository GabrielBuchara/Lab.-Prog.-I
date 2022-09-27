/*
 Faça um programa que exiba a corrente elétrica em
uma resistência equivalente R quando submetida a uma diferença de
potencial elétrico V. Calcule e exiba também a potência dissipada por
efeito Joule.

--------------------------------------------------

Fórmula do cálculo de uma corrente elétrica:

I = V / R

I: corrente elétrica (A)
V: tensão elétrica (V)
R: resistência elétrica (ohm)

---------------------------------------------

Fórmula efeito Joule = Q = i^2.R.t

Q= calor (J)
i= corrente elétrica
R= resistência elétrica (ohm)
t= intervalo de tempo (s)

-----------------------------------------------

Entrada:

- resistência elétrica;
- tensão elétrica;
- intervalo de tempo;

Saída:

-corrente elétrica = i;
-potência do efeito Joule = Q;



*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //Setando pt-BR
    setlocale (LC_ALL, "Portuguese");
    //Declaração de variáveis
    float R, V, t, i, Q;
    //Receber os valores para o cálculo da corrente elétrica
    printf("Informe o valor da resistência elétrica (Ohm): ");
    scanf("%f",&R);
    printf("\nInforme o valor da tensão elétrica (V): ");
    scanf("%f",&V);
    //Cálculo da corrente elétrica
    i = (V/R);
    //Receber os valores para o cálculo do efeito Joule
    printf("\nInforme o valor do intervalo de tempo (s): ");
    scanf("%f",&t);
    //Cálculo do efeito Joule
    Q = ((i * i )* R * t);
    //Mostrar o valor da corrente elétrica e do efeito Joule
    printf("\nO valor da corrente elétrica é de: %.2f A. \n",i);
    printf("\nO valor da potência dissipada pelo efeito Joule é de: %.2f J. \n",Q);



    return 0;
}

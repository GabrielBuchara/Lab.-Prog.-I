/*
 Fa�a um programa que exiba a corrente el�trica em
uma resist�ncia equivalente R quando submetida a uma diferen�a de
potencial el�trico V. Calcule e exiba tamb�m a pot�ncia dissipada por
efeito Joule.

--------------------------------------------------

F�rmula do c�lculo de uma corrente el�trica:

I = V / R

I: corrente el�trica (A)
V: tens�o el�trica (V)
R: resist�ncia el�trica (ohm)

---------------------------------------------

F�rmula efeito Joule = Q = i^2.R.t

Q= calor (J)
i= corrente el�trica
R= resist�ncia el�trica (ohm)
t= intervalo de tempo (s)

-----------------------------------------------

Entrada:

- resist�ncia el�trica;
- tens�o el�trica;
- intervalo de tempo;

Sa�da:

-corrente el�trica = i;
-pot�ncia do efeito Joule = Q;



*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //Setando pt-BR
    setlocale (LC_ALL, "Portuguese");
    //Declara��o de vari�veis
    float R, V, t, i, Q;
    //Receber os valores para o c�lculo da corrente el�trica
    printf("Informe o valor da resist�ncia el�trica (Ohm): ");
    scanf("%f",&R);
    printf("\nInforme o valor da tens�o el�trica (V): ");
    scanf("%f",&V);
    //C�lculo da corrente el�trica
    i = (V/R);
    //Receber os valores para o c�lculo do efeito Joule
    printf("\nInforme o valor do intervalo de tempo (s): ");
    scanf("%f",&t);
    //C�lculo do efeito Joule
    Q = ((i * i )* R * t);
    //Mostrar o valor da corrente el�trica e do efeito Joule
    printf("\nO valor da corrente el�trica � de: %.2f A. \n",i);
    printf("\nO valor da pot�ncia dissipada pelo efeito Joule � de: %.2f J. \n",Q);



    return 0;
}

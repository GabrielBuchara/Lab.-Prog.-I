#include <stdio.h>
#include <stdlib.h>


/*Lendo valores digitados

fun��o scanf() == scanf("%m�scara", &Vari�vel);

lendo inteiro == scanf("%d",&Var_Int);

lendo real == scanf("%f"< &Var_Float);



*/
int main()
{
    //Declra��o de vari�veis int
    int var_int;
    float var_float;

    //Recebendo valor inteiro
    printf("Informe um valor inteiro: ");

    //Lendo o valor inteiro recebido
    scanf("%d",&var_int);

    //Mostrando valor recebido
    printf("\nO valor inteiro informado sera: %d\n", var_int);

    //Recebendo o valor real
    printf("\nInforme um valor real: ");

    //Lendo o valor real
    scanf("%f",&var_float);
    //Mostrando o valor real
    printf("\nO valor real informado sera: %.2f\n", var_float);


    printf("\nO valor inteiro sera: %d e o valor real sera: %.2f\n", var_int, var_float);


    return 0;
}

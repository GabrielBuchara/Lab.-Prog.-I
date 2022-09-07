#include <stdio.h>
#include <stdlib.h>

/*
    Tipos de vari�veis:

    1- inteiros (int) "%d"
    2- reais (float) "%f"

    3-
    4-

Mostrando na tela uma vari�vel:
-Para mostrar uma vari�vel, ser� usada a fun��o:

printf() ---> printf("Texto %M�scara", variavel);
m�scara para inteiro: "%d"
m�scara para real: "%f"
Dica: para definir n�mero de casas decimais mostradas fazer "%.Nf", onde N � o n�mero de casas aproximadas.


*/

int main()
{
    // Declara��o de vari�vel inteira
    int var_int;
    //Declara��o de vari�vel real
    float var_float;

    // Atribuindo valor para a vari�vel inteira
    var_int = 999999;
    //Atribuindo valor para a vari�vel real
    var_float = 12.87984;

    // Mostrando a vari�vel inteira
    printf("A variavel inteira sera: %d.\n\n", var_int);
    //Mostrando a vari�vel real (6 casas decimais)
    printf("A variavel real sera: %f.\n\n",var_float);
    //Mostrando a vari�vel real com 2 casas decimais
    printf("A variavel real aproximada sera: %.2f.\n\n",var_float);
    //Mostrando duas vari�veis na mesma fun��o
    printf("O valor inteiro sera: %d e o valor real sera: %2.f.\n\n", var_int, var_float);

    return 0;
}

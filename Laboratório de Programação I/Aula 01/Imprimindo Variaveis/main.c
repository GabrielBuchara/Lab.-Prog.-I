#include <stdio.h>
#include <stdlib.h>

/*
    Tipos de variáveis:

    1- inteiros (int) "%d"
    2- reais (float) "%f"

    3-
    4-

Mostrando na tela uma variável:
-Para mostrar uma variável, será usada a função:

printf() ---> printf("Texto %Máscara", variavel);
máscara para inteiro: "%d"
máscara para real: "%f"
Dica: para definir número de casas decimais mostradas fazer "%.Nf", onde N é o número de casas aproximadas.


*/

int main()
{
    // Declaração de variável inteira
    int var_int;
    //Declaração de variável real
    float var_float;

    // Atribuindo valor para a variável inteira
    var_int = 999999;
    //Atribuindo valor para a variável real
    var_float = 12.87984;

    // Mostrando a variável inteira
    printf("A variavel inteira sera: %d.\n\n", var_int);
    //Mostrando a variável real (6 casas decimais)
    printf("A variavel real sera: %f.\n\n",var_float);
    //Mostrando a variável real com 2 casas decimais
    printf("A variavel real aproximada sera: %.2f.\n\n",var_float);
    //Mostrando duas variáveis na mesma função
    printf("O valor inteiro sera: %d e o valor real sera: %2.f.\n\n", var_int, var_float);

    return 0;
}

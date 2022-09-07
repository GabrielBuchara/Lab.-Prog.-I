/*
    Operadores relacionais:

        menor que (A<B)
        maior que (A>B)
        menor ou igual (A<=B)
        maior ou igual (A>=B)
        igual (A==B)
        diferente (A!=B)

        1 == V
        0 == F

        Se a comparação no operador for VERDADEIRA: Saída = 1.
        Se a comparação no operador for FALSA: Saída = 0.

*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaração de variáveis
    int a,b,c;
    a = 10;
    b = 5;
    c = (a!=b);

    //Mostrando valores (1 = V, 0 = F)
    printf("Resultado: %d\n",c);

    return 0;
}

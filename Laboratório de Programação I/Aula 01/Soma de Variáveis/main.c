#include <stdio.h>
#include <stdlib.h>


/* Soma de vari�veis:

a = 63
b = 3
c = a + b

*/

int main()
{
    //Declara��o de vari�veis inteiras:
    int num_a,num_b,num_c;

    //Atribui��o de valores inteiros:
    num_a = 63;
    num_b = 6;
    num_c = num_a + num_b;
    //Mostrando na tela a soma dos valores inteiros:
    printf("O valor da soma de A e B sera: %d.\n\n",num_c);
    printf("%d + %d = %d.\n\n",num_a,num_b,num_c);

    return 0;
}

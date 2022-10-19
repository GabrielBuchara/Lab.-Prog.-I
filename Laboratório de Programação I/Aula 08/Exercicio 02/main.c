/*

Faça um programa onde o usuário entra com 8 valores inteiros positivos. O programa
deve retornar:

a) Todos os números pares.
b) A quantidade de números pares.
c) Todos os números ímpares.
d) A quantidade de números ímpares.
e) Os números múltiplos de 3.
f) Os números múltiplos de 4.


*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //Habilitando pt-BR
    setlocale (LC_ALL, "Portuguese");
    //Declaração de variáveis
    int i, p = 0, imp = 0, m3 = 0, m5 = 0;
    int val[8], par[8], impar[8], mult3[8], mult5[8];
    //Recebendo os valores com o laço for
    for (i = 0; i < 8; i++){
        printf("Informe o valor %d: ",i+1);
        scanf("%d",&val[i]);
    }
    //Laço for para verificação par ou ímpar
    for (i = 0; i < 8; i++) {
        if (val[i] % 2 == 0){
            par[p] = val[i];
            p++;
        }

        else {
            impar[imp] = val[i];
            imp++;
        }

        if (val[i] % 3 == 0) {
            mult3[m3] = val[i];
            m3++;
        }

        if (val[i] % 5 == 0) {
            mult5[m5] = val[i];
            m5++;
        }
    }

    //Mostrando o item a) e b)
    for (i = 0; i < p; i ++){
        printf("Os valores pares solicitados são: ");
        printf("%d\n ",par[i]);
    }
    printf("\nA quantidade de números pares é de: %d\n\n",p );

    //Mostrando os valores dos itens c) e d)
    for(i = 0; i < imp; i++){
        printf("Os valores ímpares solicitados são: ");
        printf("%d\n", impar[i]);
    }
    printf("\nA quantidade de números ímpares é: %d. \n\n",imp);

    //Mostrandos os valores dos item e)
    for (i = 0; i < m3; i++){
        printf("Os valores múltiplos de 3 solicitados são: ");
        printf("%d\n ", mult3[i]);
    }
    printf("\nA quantidade de números múltiplos de 3 é: %d. \n\n",m3);

    //Mostrando os valores do item f)
    for (i = 0; i < m5; i ++){
        printf("\nOs valores múltiplos de 5 solicitados são: ");
        printf("%d\n ",mult5[i]);
    }
    printf("\nA quantidade de números múltiplos de 5 é: %d. \n\n",m5);


    return 0;
}

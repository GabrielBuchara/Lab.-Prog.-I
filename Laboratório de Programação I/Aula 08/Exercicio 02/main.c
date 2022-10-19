/*

Fa�a um programa onde o usu�rio entra com 8 valores inteiros positivos. O programa
deve retornar:

a) Todos os n�meros pares.
b) A quantidade de n�meros pares.
c) Todos os n�meros �mpares.
d) A quantidade de n�meros �mpares.
e) Os n�meros m�ltiplos de 3.
f) Os n�meros m�ltiplos de 4.


*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //Habilitando pt-BR
    setlocale (LC_ALL, "Portuguese");
    //Declara��o de vari�veis
    int i, p = 0, imp = 0, m3 = 0, m5 = 0;
    int val[8], par[8], impar[8], mult3[8], mult5[8];
    //Recebendo os valores com o la�o for
    for (i = 0; i < 8; i++){
        printf("Informe o valor %d: ",i+1);
        scanf("%d",&val[i]);
    }
    //La�o for para verifica��o par ou �mpar
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
        printf("Os valores pares solicitados s�o: ");
        printf("%d\n ",par[i]);
    }
    printf("\nA quantidade de n�meros pares � de: %d\n\n",p );

    //Mostrando os valores dos itens c) e d)
    for(i = 0; i < imp; i++){
        printf("Os valores �mpares solicitados s�o: ");
        printf("%d\n", impar[i]);
    }
    printf("\nA quantidade de n�meros �mpares �: %d. \n\n",imp);

    //Mostrandos os valores dos item e)
    for (i = 0; i < m3; i++){
        printf("Os valores m�ltiplos de 3 solicitados s�o: ");
        printf("%d\n ", mult3[i]);
    }
    printf("\nA quantidade de n�meros m�ltiplos de 3 �: %d. \n\n",m3);

    //Mostrando os valores do item f)
    for (i = 0; i < m5; i ++){
        printf("\nOs valores m�ltiplos de 5 solicitados s�o: ");
        printf("%d\n ",mult5[i]);
    }
    printf("\nA quantidade de n�meros m�ltiplos de 5 �: %d. \n\n",m5);


    return 0;
}

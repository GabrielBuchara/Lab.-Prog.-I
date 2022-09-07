#include <stdio.h>
#include <stdlib.h>

int main()

/* Receber 3 valores reais; Entrada
   Ler os 3 valores reais recebidos; nota1, nota2, nota3
   media = (n1+n2+n3)/3;
   Mostrar o valor da média; Saída


*/
{
    //Declaração de variáveis
    float nota1, nota2, nota3, media;
    //Receber valores
    printf("Informe o valor da primeira nota: \n");
    scanf("%f", &nota1);
    printf("Informe o valor da segunda nota: \n");
    scanf("%f", &nota2);
    printf("Informe o valor da terceira nota: \n");
    scanf("%f", &nota3);
    //Cálculo da média
    media = (nota1 + nota2 + nota3)/3;
    //Mostrando o valor da média
    printf("\nO valor da media sera: %.2f\n",media);

    return 0;
}

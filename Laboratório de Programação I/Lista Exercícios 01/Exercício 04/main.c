/*

Crie um algoritmo que a partir da área em m² e de um
dos lados de um retângulo em cm seja capaz de determinar o
comprimento do lado restante também em cm.




Entrada: area, l1
Saída: l2

m² = area * 10000 M² PARA CM

cm = area / 10000 CM PARA M²



*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //Setando pt-BR
    setlocale(LC_ALL, "Portuguese");
    //Declaração de variáveis
    float l1,l2,area,areacm;
    //Receber valores
    printf("Informe o valor da área em m²: ");
    scanf("%f",&area);
    printf("Informe o valor do lado 1 (cm²): ");
    scanf("%f",&l1);
    //
    areacm = (area * 10000);
    l2 = (areacm - l1);
    //Mostrar valores
    printf("O valor do lado restante será: %.2f cm². ",l2);



    return 0;
}

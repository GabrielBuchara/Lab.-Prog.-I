/*

Crie um algoritmo que a partir da �rea em m� e de um
dos lados de um ret�ngulo em cm seja capaz de determinar o
comprimento do lado restante tamb�m em cm.




Entrada: area, l1
Sa�da: l2

m� = area * 10000 M� PARA CM

cm = area / 10000 CM PARA M�



*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //Setando pt-BR
    setlocale(LC_ALL, "Portuguese");
    //Declara��o de vari�veis
    float l1,l2,area,areacm;
    //Receber valores
    printf("Informe o valor da �rea em m�: ");
    scanf("%f",&area);
    printf("Informe o valor do lado 1 (cm�): ");
    scanf("%f",&l1);
    //
    areacm = (area * 10000);
    l2 = (areacm - l1);
    //Mostrar valores
    printf("O valor do lado restante ser�: %.2f cm�. ",l2);



    return 0;
}

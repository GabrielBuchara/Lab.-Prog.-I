/*
    Operadores L�gicos

    NOT: inverte o resultado de uma opera��o relacional (<,>,!=,...)

        Operador: ! (a<b)!

            Tabela Verdade:
            a   !
            V   F
            F   V

    AND: Operador = &&

    Tabela Verdade:
    a   b   a&&b
    F   F     F
    F   V     F
    V   F     F
    V   V     V


    OR: Operador: ||

    Tabela Verdade:
    a   b   a||b
    F   F    F
    F   V    V
    V   F    V
    V   V    V


*/
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declarando o idioma dos caracteres
    setlocale (LC_ALL, "Portuguese");
    //Declara��o de vari�veis
    int idade;
    char PCD;

    //Receber valor da idade
    printf("Informe a idade do usu�rio: ");
    scanf("%d",&idade);
    printf("Digite Y se voc� � PCD, digite N se voc� n�o for: ");
    scanf(" %c",&PCD); //Necess�rio usar o ESPA�O antes do %, caso contr�rio, o programa ser� finalizado.
    //
    if (PCD == 'Y')
    {
        printf("Voc� tem direito ao passe livre. ");
    }
    else {
        if((idade < 5)||(idade > 65))
        {
                printf("Voc� tem direito ao passe livre. ");
        }
        else
        {
            printf("Voc� N�O tem direito ao passe livre. ");
        }
        if (PCD !='N')
        {
            printf("O caractere informado para PCD n�o � v�lido, digite novamente. ");
        }
    }
        /*if (PCD == 'Y') && (PCD == 'N')
        {
            printf("O caractere informado para PCD n�o � v�lido, digite novamente. ");
        }
        */
return 0;
}

/*
    Operadores Lógicos

    NOT: inverte o resultado de uma operação relacional (<,>,!=,...)

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
    //Declaração de variáveis
    int idade;
    char PCD;

    //Receber valor da idade
    printf("Informe a idade do usuário: ");
    scanf("%d",&idade);
    printf("Digite Y se você é PCD, digite N se você não for: ");
    scanf(" %c",&PCD); //Necessário usar o ESPAÇO antes do %, caso contrário, o programa será finalizado.
    //
    if (PCD == 'Y')
    {
        printf("Você tem direito ao passe livre. ");
    }
    else {
        if((idade < 5)||(idade > 65))
        {
                printf("Você tem direito ao passe livre. ");
        }
        else
        {
            printf("Você NÃO tem direito ao passe livre. ");
        }
        if (PCD !='N')
        {
            printf("O caractere informado para PCD não é válido, digite novamente. ");
        }
    }
        /*if (PCD == 'Y') && (PCD == 'N')
        {
            printf("O caractere informado para PCD não é válido, digite novamente. ");
        }
        */
return 0;
}

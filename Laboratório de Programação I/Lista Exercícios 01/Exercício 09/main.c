/*


Faça um programa que auxilie a identificar as categorias de peso do boxe olímpico. O
usuário deve informar o sexo do competidor e seu peso, o programa deve classificar o competidor em
uma das seguintes categorias:

MASCULINO

mosca-ligeiro m ≤ 49 kg
mosca 49 kg < m ≤ 52 kg
galo 52 kg < m ≤ 56 kg
leve 56 kg < m ≤ 60 kg
médio-ligeiro 60 kg < m ≤ 64 kg
meio-médio 64 kg < m ≤ 69 kg
médio 69 kg < m ≤ 75 kg
meio-pesado 75 kg < m ≤ 81 kg
pesado 81 kg < m ≤ 91 kg
super-pesado m > 91 kg

FEMININO

mosca m ≤ 51 kg
leve 51 kg < m ≤ 60 kg
meio-pesado 60 kg < m ≤ 81 kg
pesado m >81 kg

Onde m representa a massa do atleta




Entrada: peso, sexo;
Saída:


*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //Setando pt-BR
    setlocale (LC_ALL, "Portuguese");
    //Declaração de variáveis
    float peso;
    char sexo;
    //Receber os valores
    printf("Informe o peso do competidor: (kg) ");
    scanf("%f",&peso);
    printf("Informe o sexo do competidor: (M ou F) ");
    scanf("%s",&sexo);
    //Condição para definir o sexo masculino
    if (sexo == 'M'){
        //Condição peso mosca-ligeiro
        if (peso <= 49) {
            printf("Peso MOSCA-LIGEIRO. ");
        }
        //Condição peso mosca
            else if (peso > 49 && peso <= 52) {
                printf("Peso MOSCA. ");
            }
        //Condição peso galo
            else if (peso > 52 && peso <= 56) {
                printf("Peso GALO. ");
            }
        //Condição peso leve
            else if (peso > 56 && peso <= 60){
                printf("Peso LEVE. ");
            }
        //Condição peso médio-ligeiro
            else if (peso > 60 && peso <= 64){
                printf("Peso MÉDIO-LIGEIRO. ");
            }
        //Condição peso meio-médio
            else if(peso > 64 && peso <= 69){
                printf("Peso MEIO-MÉDIO. ");
            }
        //Condição peso médio
            else if(peso > 69 && peso <= 75){
                printf("Peso MÉDIO. ");
            }
        //Condição peso meio-pesado
            else if (peso > 75 && peso <= 81){
                printf("Peso MEIO-PESADO. ");
            }
        //Condição peso pesado
            else if (peso > 81 && peso <= 91){
                printf("Peso PESADO. ");
            }
        //Condição peso super pesado
            else if (peso > 91){
                printf("Peso SUPER-PESADO. ");
            }

    }
        //Condição para definir o sexo feminino
        else if (sexo == 'F') {
        //Condição peso mosca
            if (peso <= 51){
                printf("Peso MOSCA. ");
            }
        //Condição peso leve
                else if (peso > 51 && peso <= 60) {
                    printf("Peso LEVE. ");
                }
        //Condição peso meio-pesado
                else if (peso > 60 && peso <= 81 ) {
                    printf("Peso MEIO-PESADO. ");
                }
        //Condição peso pesado
                else if (peso > 81) {
                    printf("Peso PESADO. ");
                }
        }

    else {
        printf("Opção inválida. Digite novamente. ");
    }

    return 0;
}

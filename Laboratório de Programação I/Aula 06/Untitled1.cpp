/*

Estrutura de repetição:

PARA	ENQUANTO
for		while

-For: repetir um número determinado de vezes.
-While: verificando uma condição enquanto ela for V, repetir a estrutura.

for (condi iniciaL, CONDIÇÃO FINAL, MC-CONDIÇÃO)
- Necessitam de um contador.

for (i = 1; i <= 10; i ++) { // i++ = i = i +1
printf("%d",i); // i = 1; 
}


*/


#include <stdio.h>
#include <locale.h>


int main() {
	//Setando pt-BR
	setlocale(LC_ALL, "Portuguese");
	//Declaração de variáveis
	int contador;
	//Estrutura For
	for (contador = 0; contador <=10; contador++) {
		printf("%d\n",contador);
		
		
		
		
	}
	
	

	








return 0;

}


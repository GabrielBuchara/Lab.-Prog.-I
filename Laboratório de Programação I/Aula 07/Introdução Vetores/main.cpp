/*

Vetores:
-Estruturas Hommong�neas (mesmo tipo. Ex: int,float, etc...);

-int A = 5;
- vetA [7] = 0,1,2,3,4,5,6 (todos int);


*/

#include <stdio.h>
#include <locale.h>



int main() {
	//
	setlocale (LC_ALL, "Portuguese");
	//
	int i;
	//Declara��o de vetores: Tipo 1
	int vet_int1[] = {23,1,452,6,-5}; //valor do conte�do do vetor: 5; �ltimo valor do vetor: 4
	//Declara��o de vetores: Tipo 2
	int vet_int2[10] = {0};//vetor com 100 n�meros 0's. Se voc� pedir um valor acima do array, o programa pegar� o lixo da mem�ria.
	//Declara��o de vetores: Tipo 3
	float vet_float1[]={0.5, 3.1415, 2.73};
	//Declara��o de vetores: Tipo 4
	char vet_char1[]={'a','e','i','o','u'};
	//Tipo 1
/*	printf("%d\n",vet_int1[0]); //1� valor
	printf("%d\n",vet_int1[4]);//5� valor = �ltimo = [valor]
	printf("%d\n",vet_int1[2]);
	printf("%d\n",vet_int1[3]);
	//Tipo 2
	printf("%d\n",vet_int2[9]);
	//Tipo 3
	printf("%f\n",vet_float1[0]);
	printf("%f\n",vet_float1[2]);
	//Tipo 4
	printf("%c\n",vet_char1[1]);
	printf("%c\n",vet_char1[4]);
*/
	//Ao inv�s de escrever separadamente...
/*	printf("%d ",vet_int1[0]);	
	printf("%d ",vet_int1[1]);
	printf("%d ",vet_int1[2]);
	printf("%d ",vet_int1[3]);
	printf("%d ",vet_int1[4]);
*/	
	//Utilizar o la�o para r�pida impress�o.
	for (i = 0; i < 5; i++){
//		printf("%d\t",vet_int1[i]);
	}

	//Declara��o de vetores: Modo 2
	int vet_int3[8];
	//Recebendo os valores em um la�o for
	for (i = 0; i < 8; i++){
		printf("Informe o valor para  a posi��o %d: ",i+1);
		scanf("%d",&vet_int3[i]);
	}
	//Mostrando os valores em um la�o for
	printf("\n\n�ndice \tValor\n");
	for (i = 0; i < 8; i++){
		printf("     %d     %d\n",i,vet_int3[i]);
	}
	
	
	
	
	
	return 0;
}

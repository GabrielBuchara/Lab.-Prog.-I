#include <stdio.h>
/* FUN��ES E PROCEDIMENTOS
	Exerc�cio 2
		As disciplinas de f�sica e de c�lculo
		apresentam 4 provas. Fa�a um programa
		que receba as notas das provas de cada
		disciplina e calcule a m�dia de cada
		uma delas.
*/
//Procedimento imprimeNota
void imprimeNota(char nome[],float m)
{
	printf("%s%.2f",nome,m);
}

// procedimento recebeNotas
void recebeNotas(char nome[], float nota[])
{
	int i;
	printf("Informe as notas de %s:\n",nome);
	for(i=0;i<4;i++)
	{
		printf("\tP%d:",i+1);
		scanf("%f",&nota[i]);
	}
}
// Fun��o media
float media(float nota[])
{
	int i; 
	float soma =0, m;
	for(i=0;i<4;i++)
	{
		soma = soma+nota[i];
	}
	m = soma/4;
	return m;
}

// Fun��o principal
int main()
{
	float mediaFisica, mediaCalculo, mediaAlgebra;
	float fisica[4], calculo[4],algebra[4];
	
	recebeNotas("fisica", fisica);
	recebeNotas("calculo",calculo);
	recebeNotas("algebra",algebra);

	mediaFisica = media(fisica);
	mediaCalculo = media(calculo);
	mediaAlgebra = media(algebra);
	
	printf("\n\n\n\t As medias sao:\n");
	imprimeNota("Fisca: ",mediaFisica);
	imprimeNota("\nCalculo: ", mediaCalculo);
	imprimeNota("\nAlgebra: ",mediaAlgebra);
	return 0;
}

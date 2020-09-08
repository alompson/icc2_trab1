#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (void)
{
	int opc, tam, *vetor; //variaveis necessarias para qualquer metodo de ordenaçao abaixo
	int aux; //variavel para o bubble e para o Selection
	int menor; //variavel para o selection
	char ord[10]; //para escolher o metodo de ordenação
	fgets(ord, 10, stdin); //metodo de ordenaçao
	scanf("%d", &tam); //tamanho do vetor
	vetor = (int*) malloc (tam*sizeof(int));
	for (int i = 1; i <= tam; i++)
	{
		scanf("%d", &vetor[i-1]); //lendo cada valor do vetor desejado
	}

	if (strcmp("bolha\n", ord) == 0)
	{
	//algoritmo bubble Sort
		for (int i = 0; i < tam; i++)
		{
			for (int j = 0; j < tam-1; j++)
			{
				printf("C %d %d\n", j, j+1);
				if(vetor[j] > vetor[j+1])
				{
					aux = vetor[j];
					vetor[j] = vetor[j+1];
					vetor[j+1] = aux;
					printf("T %d %d\n", j, j+1);
				}
			}
		}
	}
	else if(strcmp("selecao\n", ord) == 0)
	{
	//algoritmo Selection Sort	
		for(int i = 0; i < tam; i++)
		{
			menor = i; 
			for(int j = i+1; j < tam; j++)
			{
				printf("C %d %d\n", menor, j);
				if (vetor[j] < vetor[menor])
				{
					menor = j;
				}			
			}
		aux = vetor[i];
		vetor[i] = vetor[menor];
		vetor[menor] = aux;
		printf("T %d %d\n", menor, i);
		}
	}
	for (int i = 0; i < tam; i++)
	{
		if (i == tam-1)
			printf("%d\n", vetor[i]);
		else
			printf("%d ", vetor[i]);
	}
	free(vetor);
}

#include <stdio.h>

int soma(int* vetor);

int main()
{
	int vetor[5];
	
	printf("digite os valores do vetor: ");
	
	for(int i=0;i<5; i++)
	{
		scanf("%d", &vetor[i]);
		
	}
	soma(vetor);
	return 0;
	
}

int soma(int* vetor)
{
	int resultado;
	int vetor2[5];
	for(int i=0; i<5; i++)
	{
		vetor2[i]=vetor[i]+vetor[i];
		resultado = resultado+vetor[i];
	}
	for(int i=0; i<5; i++)
	{
		printf("%d,", vetor2[i]);
		
	}
	printf("\nresultado: %d", resultado);
	return 0;
}

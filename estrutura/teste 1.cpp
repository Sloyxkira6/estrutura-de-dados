#include <stdio.h>
/*
) Crie uma função, conforme protótipo, que opera sobre um vetor de 
n elementos do tipo float passados como parâmetro por referência.
Realize a soma de todos os elementos do vetor por callback e Imprima 
o resultado na tela
*/


int soma(float vetor,int n)
{
	for(int i=0;i<n; i++)
	{
		printf("%d° elemento: ", i+1);
		scanf("%f", vetor[i]);
	}
}

float exec_vector(float(*f)(float*,int ), float* vetor, int n)
{
	
}

int main()
{
	int n;
	printf("digite o tamanho do vetor: ");
	scanf("%d", &n);
	
	float vetor[n];
	soma(vetor, n);
	for(int i=0; i<n;i++)
	{
		printf("%d° elemento: ", i+1);
		scanf("%f", vetor[i]);
	}
	
	execu_vetor(soma, vetor, n);
	
	return 0;
}

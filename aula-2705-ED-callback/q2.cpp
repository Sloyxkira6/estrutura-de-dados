
#include <stdio.h>

float cria_vetor(float* vetor, int n)
{
    float resultado=0.0;

    for(int i=0; i<n; i++)
    {
        printf("digite os elementos do primeiro vetor vai possuir posicao %d: ", i+1);
        scanf("%f", &vetor[i]);
    }

    for(int i=0; i<n; i++)
    {
        resultado = resultado + vetor[i];
    }
    return resultado;
}


float exec_vetor(float (*f)(float*, int),float* vetor, int n)
{
        printf("a soma do vetor e: %.2f", f(vetor, n));
    
}

int main()
{
    int n;

    printf("digite quantos elementos deseja que o vetor tenha: ");
    scanf("%d", &n);
    float vetor[n];


    exec_vetor(cria_vetor, vetor, n);


    return 0;
}
#include <stdio.h>

int main()
{
    int n;
    printf("digite quantos elementos deseja que o vetor tenha: ");
    scanf("%d", &n);

    int vetor[n];

    for(int i=0; i<=n; i++)
    {
        printf("digite os elementos que o vetor vai possuir posicao %d: ", i);
        scanf("%d", vetor[i]);
    }
    
    return 0;
}

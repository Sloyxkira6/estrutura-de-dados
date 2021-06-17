#include <stdio.h>
#include <stdlib.h>

typedef struct ponto
{
	float x, y;
} Ponto, *PPonto ;


float soma_pontos(Ponto p1) ;

int main()
{
	PPonto p1=(PPonto)malloc(sizeof(Ponto)) ;
	
	scanf("%f %f", &p1->x, &p1->y) ;
	printf("ponto x de p1 é: %.1f \nponto y de p1 é: %.1f", p1->x, p1->y) ;
	
	soma_pontos(p1) ;
	
	free(p1) ;
	return 0 ;
}
float soma_pontos (Ponto* p1)
{
	float soma = 0 ;
	
	soma = p1->x + p1->y ;
	
	printf("\na soma entre os dois pontos é: %f", soma) ;
	return 0;
}

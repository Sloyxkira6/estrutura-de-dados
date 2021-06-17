#include <stdio.h>

#include "circulo.h"
#include "ponto.h"

int main()
{
	float x, y, r;
	
	printf("\nEntre com duas coordenadas (x,y) do centro do ciruclo e o raio: ");
	scanf("%f %f %f", &x, &y, &r);
	
	PCirculo c1=circ_cria(x, y, r);
	
	printf("\nCirculo com centro em (%.1f, %1.f) e raio %.1f\n", c1->p->x, c1->p->y, c1->r);
	
	printf("\na area e: %1.f", circ_area(c1));
	
	printf("\nentre com duas coordenas (x,y) do ponto: ");
	
	PPonto p1=pto_cria(x,y) ;
	
	if(circ_interior(c1,p1))
	{
		printf("o ponto esta dentro do circulo");
		
	}
	else
	{
		printf("o ponto esta fora do circulo");
		
	}
	
	circ_libera(c1);
	pto_libera(p1) ;
	
	
	
}

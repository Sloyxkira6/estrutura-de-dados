#include <stdio.h>


#include "circulo.h"
#include "ponto.h"

int main ()
{
	float x, y, r;
	
	printf("\nEntre com duas coordenadas(x,y) do centro do circulo e o raio:" ) ;
	scanf("%f %f %f ", &x, &y, &r) ;
	
	Circulo* c1=circ_cria(x,y,r);
	
	printf("\nCirculo com centro em (%.1f, %.1f) e raio %.1f\n", c1->p->x, c1->p->y, c1->r) ;

	printf("\nA area e: %.1f.", circ_area(c1)) ;
	
	printf("\nEntre com duas coordenadas(x,y) do ponto: ") ;
	scanf("%f %f", &x, &y) ;
	
	Ponto* p1=pto_cria(x,y);
	
	if(circ_interior(c1, p1))
	{
		printf("o ponto esta Dentro do circulo");
	}
	else
	{
		printf("o ponto esta fora do circulo");
	}

	circ_libera(c1) ;
	pto_libera(p1) ;

	return 0;

}

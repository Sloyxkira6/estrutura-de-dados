#include <stdio.h>
#include <stdlib.h>
#include <math.h>


struct ponto
{
	float x, y ;
	
};

PPonto pto_cria(float x, float y)
{
	PPonto  p=(PPonto)malloc(sizeof(Ponto)) ;
		
	if(p==NULL)
	{
		printf("Memoria insuficiente!\n") ;
		exit (1) ; 
	}
	p->x=x;
	p->y=y;
	
	return p;
}
void pto_libera(PPonto  p)
{
	free(p);
}
void pto_acessa(PPonto p, float* x, float* y)
{
	*x=p->x ;
	*y=p->y ;
}
void pto_atribui(PPonto p, float x, float y)
{
	p->x=x;
	p->y=y;
}
float pto_distancia(PPonto p1, PPonto p2)
{
	float dx = p2->x - p1->x ;
	float dy = p2->y - p1->y ;
	
	return sqrt(dx*dx + dy*dy) ;
	
}

